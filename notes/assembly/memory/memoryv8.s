.global _Z1fpii # pointer to integer

// sum up some integers
// f(int x[], int n)
_Z1fpii:
  .cfi_startproc
  mov w2, r0 // w2 is pointing to the array
  mov w0, #0 // w0 is the result (sum)
  cmp w1, #0
  bgt loop
  ret
  .cfi_endproc
loop:
  ldr w3, [x2] // go get the stuff in the index. if you do [w2!], you don't need the next line
  add w0, w0, w3 // add w3 to sum
  add w2, w2, #4 // increment w2 by 4 bytes (32 bit)
  subs w1, #1
  bne loop
  ret
