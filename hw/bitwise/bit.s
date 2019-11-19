// I pledge my honor that I have abided by the Stevens Honor System. - Joshua Schmidt
.global _Z3setii, _Z5clearii, _Z4testii, _Z6toggleii
// r0 = number, r1 is the position of the number to set to 1
_Z3setii:
  mov r2, #1
  lsl r2, r1
  // for signed integers use asl (arithmetic shift left)
  orr r0, r2
  bx lr

_Z5clearii:
  mov r2, #1
  lsl r2, r1
  // mvn is move and negate
  mvn r2, r2 // flips every bit
  and r0, r0, r2
  // bic is the same as the previous 2 instructions
  // stands for bit clear
  bx lr

_Z4testii:
  mov r2, #1
  lsl r2, r1
  // could set z flag and add branch: ands r2, r0, r2
  // could do this with 1 command: tst r0, r1 - non-destructive
  and r2, r0, r2
  lsr r2, r1
  mov r0, r2
  bx lr

_Z6toggleii:
  mov r2, #1
  lsl r2, r1
  eor r0, r2, r0
  bx lr
