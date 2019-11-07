.global _Z1fPii // pointer to integer

// sum up some integers
// f(int x[], int n)
_Z1fPii:
  .cfi_startproc
  mov x2, x0 // w2 is pointing to the array
  mov w0, #0 // w0 is the result (sum)
  subs w1, w1, #1
  bgt loop
  ret
loop:
  ldr w3, [x2, x1, lsl #2] // logical shift left and multiply by x1. 
  // that's just how indexing works - see https://stackoverflow.com/a/52727969/8623391
  add w0, w0, w3 // add w3 to sum
  subs x1, x1, #1
  bge loop
  ret
  .cfi_endproc
