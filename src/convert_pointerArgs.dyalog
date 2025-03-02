
⎕io←0
c ← 0⎕Fix 'convert-lib.apln',⍨⊃1⎕NPARTS''
CI ← c.CI
CTI ← c.CTI
Assert ← c.Assert
declorations ← c.declorations
sizeofCode ← c.sizeofCode
includes ← c.includes

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
  namesList ← {⍵/⍨⌽∧\⌽(1⎕C⍵)∊⎕A,⎕D}¨argsList

  typesList ← argsList CTI¨ namesList
  argsWereNotPointers ← ~'*'∊¨typesList

  argNamesPtrAdded ← (argsWereNotPointers⍴¨'*'),¨namesList
  argsInCall ← 2↓⊃,/', '∘,¨ argNamesPtrAdded
  argsInDecl ← 2↓⊃,/', '∘,¨ typesList,¨argNamesPtrAdded

  AddRetArg ← {retType,'*ret',', '∘,⍣(')'≠⊃⍵)⊢⍵}⍣(retType≢'void ')
  AddRetAssign ← '*ret='∘,⍣(retType≢'void ')
  'void ',name,'RetPtr(',AddRetArg argsInDecl,'){',AddRetAssign name,'(',argsInCall,');}',onwards
}

fixed ← fixDecleration¨declorations
'temp-c-raylib.c'1⎕NPUT⍨⊂includes,sizeofCode,fixed
