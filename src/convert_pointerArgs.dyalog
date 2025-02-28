
⎕io←0
Assert ← {⍺←'assertion failure' ⋄ 0∊⍵:⍺ ⎕SIGNAL 8 ⋄ shy←0}
CI ← { ⍝ ,⍣¯1 but better. CI = Concatinate Inverse
  _←Assert 1 1≡≢∘⍴¨⍺⍵
  _←Assert ⍺≤⍥≢⍵
  _←Assert ⍺≡⍵↑⍨≢⍺
  ⍵↓⍨≢⍺
}
CTI ← { ⍝ ,⍨⍣¯1 but better. CTI = Concatinate Tilda Inverse
  _←Assert 1 1≡≢∘⍴¨⍺⍵
  _←Assert ⍺≤⍥≢⍵
  _←Assert ⍺≡⍵↑⍨-≢⍺
  ⍵↓⍨-≢⍺
}⍨
⍝ validTypes ← ⍬
⍝ validTypes ,←⊂ 'bool '
⍝ validTypes ,←⊂ 'int '
⍝ validTypes ,←⊂ 'void *'
fixDecleration ← {
  retTypeAndName ← ⍵/⍨∧\'('≠⍵
  retType ← {⍵/⍨~⌽∧\⌽(⎕A,⎕D)∊⍨1⎕C⍵} retTypeAndName
  name ← retType CI retTypeAndName
  argTypesAndOnwards ← (,'(') CI retTypeAndName CI ⍵
  argTypesAndOnwards CI⍨← 'void'/⍨'void)'≡5↑argTypesAndOnwards ⍝ remove void when we add return argument

  args ← {⍵/⍨⌽∨\⌽¯1⌽');'⍷⍵}argTypesAndOnwards
  onwards ← args CI argTypesAndOnwards
  argsList ← ', '(~⍤⍷⊆⊢) args CTI ');'
  namesList ← {⍵/⍨⌽∧\⌽(⎕A,⎕D)∊⍨1⎕C⍵}¨argsList

  typesList ← argsList CTI¨ namesList
  argsWereNotPointers ← ~'*'∊¨typesList

  argNamesPtrAdded ← (argsWereNotPointers⍴¨'*'),¨namesList
  argsInCall ← 2↓⊃,/', '∘,¨ argNamesPtrAdded
  argsInDecl ← 2↓⊃,/', '∘,¨ typesList,¨argNamesPtrAdded

  AddRetArg ← {retType,'*ret',', '∘,⍣(')'≠⊃⍵)⊢⍵}⍣(retType≢'void ')
  AddRetAssign ← '*ret='∘,⍣(retType≢'void ')
  'void ',name,'RetPtr(',AddRetArg argsInDecl,'){',AddRetAssign name,'(',argsInCall,');}',onwards
}

⍝IsDecleration ← {
⍝  comment←∨\'//'⍷⍵
⍝  spaces←' '=⍵
⍝  decl ← ~⌽∧\⌽spaces∨comment
⍝  o1←{(');'≡⍵)∨')'≡⊃⌽⍵}⍵/⍨decl>2⌽decl
⍝  o2←∧/0≤+\-⌿'()'∘.=⍵
⍝  o3 ← ~∨/(1 ⎕C 'typedef' 'if') ∊⍨(⎕A,⎕D)(∊⍨⊆⊢)1 ⎕C ⍵
⍝  o4←' '≠⊃⍵
⍝
⍝  retTypeAndName ← ⍵↑⍨⊃⍸'('=⍵
⍝  retType ← {⍵/⍨⌽∧\⌽(⎕A,⎕D)∊⍨1⎕C⍵} retTypeAndName
⍝  name ← (≢retType)↓ retTypeAndName
⍝  o5←0≢≢name
⍝  o6←~∨/'{}'∊⍵
⍝
⍝  o1∧o2∧o3∧o4∧o5∧o6
⍝}
⍝⎕←IsDecleration 'RLAPI void *func(type *name);   // lala'
⍝⎕←IsDecleration 'void *func(type *name);   // lala'
⍝⎕←IsDecleration 'RLAPI ModelAnimation *LoadModelAnimations(const char *fileName, int *animCount);            // Load model animations from file'
⍝⎕←IsDecleration 'RLAPI void UpdateModelAnimation(Model model, ModelAnimation anim, int frame);               // Update model animation pose'
⍝⎕←IsDecleration 'RLAPI void UnloadModelAnimation(ModelAnimation anim);                                       // Unload animation data'
⍝⎕←IsDecleration 'RLAPI void UnloadModelAnimations(ModelAnimation *animations, int animCount);                // Unload animation array data'
⍝⎕←IsDecleration 'RLAPI bool IsModelAnimationValid(Model model, ModelAnimation anim);                         // Check model animation skeleton match'

includes ← ⍬
includes ,←⊂ '#include <raylib.h>'
includes ,←⊂ '#include <raymath.h>'
includes ,←⊂ '#include <rlgl.h>'
includes ,←⊂ '#define RAYGUI_IMPLEMENTATION'
includes ,←⊂ '#include "raygui.h"'
includes ,←⊂ '#define PHYSAC_IMPLEMENTATION'
includes ,←⊂ '#include "physac.h"'

functionsStart ← ⍬
functionsStart ,←⊂ '#if defined(__cplusplus)'
functionsStart ,←⊂ 'extern "C" {            // Prevents name mangling of functions'
functionsStart ,←⊂ '#endif'

functionsEnd ← ⍬
functionsEnd ,←⊂ '#if defined(__cplusplus)'
functionsEnd ,←⊂ ,'}'
functionsEnd ,←⊂ '#endif'

filterMacros ← {
  b←'#if defined(GRAPHICS_API_OPENGL_11)'∘≡¨⍵
  e←'#endif'∘≡¨⍵
  k←0
  depth ← e{⍺:k⊢←0 ⋄ ⍵:k⊢←1 ⋄ k}¨b
  _←Assert 1≥depth
  ⍵/⍨~depth
}

(rl rm rlgl) ← filterMacros¨ (⊃⍤⎕NGET 1,⍨⊂)¨ '../build/_deps/raylib-build/raylib/include/'∘,¨'raylib.h' 'raymath.h' 'rlgl.h'
rgui         ← filterMacros  (⊃⍤⎕NGET 1,⍨⊂) 'raygui.h'
physac       ← filterMacros  (⊃⍤⎕NGET 1,⍨⊂) 'physac.h'


⍝ Get list of structs
vec ← 'Vector2' 'Vector3' 'Vector4' 'Matrix' 'Color' 'Rectangle' 'Image' 'Texture' 'RenderTexture' 'NPatchInfo' 'GlyphInfo' 'Font' 'Camera3D' 'Camera2D' 'Mesh' 'Shader' 'MaterialMap' 'Material' 'Transform' 'BoneInfo' 'Model' 'ModelAnimation' 'Ray' 'RayCollision' 'BoundingBox' 'Wave' 'rAudioBuffer' 'rAudioProcessor' 'AudioStream' 'Sound' 'Music' 'VrDeviceInfo' 'VrStereoConfig' 'FilePathList' 'AutomationEvent' 'AutomationEventList'
nl ← ⎕UCS 10
SP ← 'typedef struct ' ⍝ Struct prefix
I ← {⍺←⊢⋄⍺ ⍺⍺⍣¯1⊢⍵}

structsAndMore ← rl ⊆⍨ +\(' {'∘≡¨¯2↑¨rl) ∧ SP∘≡¨(≢SP)∘↑¨rl
names ← ,∘' {'I¨ SP∘,I¨ ⊃¨structsAndMore

structs ← structsAndMore {⍺/⍨⌽∨\⌽⍵∘≡¨⍺}¨ '} '∘,¨names,¨';'


⍝ redefine new structs with __attribute__((packed))



⍝ Use new structs for args in and


⍝ Sizeofs

sizeofCode ←,⊂'char *structNames[] = {','};',⍨ ⊃,/'"'∘,¨,∘'",'¨names
sizeofCode,← ⊂'int structSizes[] = {','};',⍨ ⊃,/'sizeof('∘,¨,∘'),'¨names
sizeofCode,← ⊂'int StructCount() {return ',';}',⍨⍕≢names
sizeofCode,← ⊂''
sizeofCode,← ⊂'int GetStructSize(int index) {return structSizes[index];}'
sizeofCode,← ⊂'void GetStructName(char *retName, int strlen, int index) {'
sizeofCode,← ⊂'  for (int i=0;i<strlen;i++) {'
sizeofCode,← ⊂'    retName[i] = structNames[index][i];'
sizeofCode,← ⊂'  }'
sizeofCode,← ⊂'}'

physacFuncs  ←   physac {⍵CI¨⍺/⍨⍵≡¨10↑¨⍺} ⊂'PHYSACDEF '
rayguiFuncs  ←     rgui {⍵CI¨⍺/⍨⍵≡¨10↑¨⍺} ⊂'RAYGUIAPI '
raylibFuncs  ←       rl {⍵CI¨⍺/⍨⍵≡¨ 6↑¨⍺} ⊂'RLAPI '
raymathFuncs ← ';',⍨¨rm {⍵CI¨⍺/⍨⍵≡¨ 6↑¨⍺} ⊂'RMAPI '

⍝             /¯¯¯¯fixes bug in rl 5.0¯¯¯¯¯¯¯\
rlglFuncs   ← (  rlgl/⍨~∨\functionsEnd⍷  rlgl) {⍵CI¨⍺/⍨⍵≡¨ 6↑¨⍺} ⊂'RLAPI '
physacFuncs ← (physac/⍨~∨\functionsEnd⍷physac) {⍵CI¨⍺/⍨⍵≡¨10↑¨⍺} ⊂'PHYSACDEF '



declorations ← ⊃,/(raylibFuncs raymathFuncs rlglFuncs rayguiFuncs)
fixed ← fixDecleration¨ {⍵/⍨∧/3∨/'.'≠↑(⊃¨⍸¨'//'∘⍷¨⍵)↑¨⍵} declorations
'temp-c-raylib.c'1⎕NPUT⍨⊂includes,sizeofCode,fixed
