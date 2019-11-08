.global _Z10dotproductPdS_i // pointer to integer

// dot product of array
// double dotproduct(double a[], double b[], int len)
_Z10dotproductPdS_i:
  push {r4, r5}
  mov r3, r0 // now r3 is pointing to the first array, r1 to second
  mov r0, #0 // r0 is the result (sum)
  cmp r2, #0 // this is the counter
  bgt dotproductloop
  bx lr
dotproductloop:
  ldr r4, [r3] // get stuff in fist array
  ldr r5, [r1] // get stuff in second array
  mul r4, r4, r5 // multiple numbers
  add r0, r0, r4 // add to result
  add r3, r3, #8 // increment r3 by 8 bytes (64 bit) - first array
  add r1, r1, #8 // increment counter
  subs r2, r2, #1
  bne dotproductloop
  pop {r4, r5}
  bx lr
