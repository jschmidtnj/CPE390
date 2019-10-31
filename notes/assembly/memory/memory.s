.global _Z1fpii # pointer to integer

// sum up some integers
// f(int x[], int n)
_Z1fpii:
  // r0 = pointing to the array
  // r1 = length of the array
  mov r2, r0 // r2 is pointing to the array
  mov r0, #0 // r0 is the result (sum)
loop:
  ldr r3, [r2] // go get the stuff in the index. if you do [r2!], you don't need the next line
  add r0, r0, r3 // add r3 to sum
  add r2, r2, #4 // increment r2 by 4 bytes (32 bit)
  subs r1, #1
  bne loop
  bx lr

// load from and to register
_Z9loadarrayPKii:
  .fnstart
  // r0 = location of the array
  // r1 = length of the array
  ldr r2, [r0] // load from location r0 into register r2
  str r2, [r0] // store from register r2 into memory location [r0]
