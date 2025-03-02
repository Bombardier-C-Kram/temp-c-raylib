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
  retTypeAndName ← ⍵↑⍨⊃⍸'('=⍵
  retType ← {⍵/⍨~⌽∧\⌽(⎕A,⎕D)∊⍨1⎕C⍵} retTypeAndName
  retType≡'void ' : ''
  name ← retType CI retTypeAndName
  argTypesAndOnwards ← (,'(') CI name CI retType CI ⍵
  argTypesAndOnwards CI⍨← 'void'/⍨'void)'≡5↑argTypesAndOnwards ⍝ remove void when we add return argument
  newArgTypesAndOnwards ← argTypesAndOnwards,⍨retType,'*ret',', '/⍨')'≠⊃argTypesAndOnwards

  (argTypes newArgTypes) ← {⍵/⍨⌽∨\⌽¯1⌽');'⍷⍵}¨(argTypesAndOnwards newArgTypesAndOnwards)
  onwards ← argTypes CI argTypesAndOnwards
  argsNames ← ');',⍨ 2↓⊃,/', '∘,¨ {⍵/⍨⌽∧\⌽(1⎕C⍵)∊⎕A,⎕D}¨ ', '(~⍤⍷⊆⊢) ({⍵↓⍨-';'=⊃⌽⍵}argTypes) CTI ,')'

  funcDefAndOnwards ← '{*ret=',name,'(',argsNames,'}',onwards

  'void ',name,'RetPtr(',(newArgTypes CTI ,';'), funcDefAndOnwards
}

fixed ← {⍵/⍨0≠≢¨⍵} fixDecleration¨ declorations
'temp-c-raylib.c'1⎕NPUT⍨⊂includes, sizeofCode,fixed
