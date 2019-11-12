// I pledge my honor that I have abided by the Stevens Honor System. -Joshua Schmidt
.global _Z10dotproductPdS_i // pointer to integer

// dot product of array
// double dotproduct(double a[], double b[], int len)
_Z10dotproductPdS_i:
  .cfi_startproc
  movi d0, #0 // now d0 is the result
  cmp w2, #0 // this is the max count
  ble out
  mov x3, #0 // this is the counter
  b dotproductloop
dotproductloop:
  ldr d2, [x0, x3, lsl #3] // get stuff in fist array
  ldr d1, [x1, x3, lsl #3] // get stuff in second array
  add x3, x3, #1
  cmp w2, w3
  fmadd d0, d2, d1, d0 // add to result
  bgt dotproductloop
  b out
out:
  ret
  .cfi_endproc

