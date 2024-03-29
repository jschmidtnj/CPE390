.global _Z1xv // this is a directive, exports the symbol to another file
_Z1xv: // v means void, colon means define the address is right here
  .fnstart // start the function here
  mov // MOV works too (not case sensitive)
  mov r0, #2 // moves the number 2 to register 0. this is called "immediate mode"
  mov r0, r2 // moves the stuff in r2 to r0. this is called register to register
  mov r1, #7 // can't put stuff higher than 7 into register like this. registers up to r15
  ldr r2, =#2021 // for loading bigger numbers
  ldr r9, =#0xFFFFFFFF // hex is 4 bits, 32 bit is 4 bytes
  // note: in c++, don't use a leading zero (077 is not 77) - this becomes 3 bits (base 8)
  add r0, r1, r2 // r0 = r1 + r2
  add r0, r0, r1 // r0 = r0 + r1
  add r0, r1 // r0 = r0 + r1
  sub r0, r5, r7 // r0 = r5 - r7
  sub r0, r0, r1 // r0 = r0 - r1
  sub r0, r1, r0 // r0 = r1 - r0
  mul r0, r1, r2 // r0 = r1 * r2
  // there is no divide!
  and // bitwise and
  orr // bitwise or 
  eor // exclusive or (xor)
  // 1101 0010 1101 0111 = 0xD2D7
  // xor something with itself makes it 0
  mvn r0, r1 // r0 = not r1
  // comments include @, ;, //

  // branch instructions
  bl hello // store the current location in the link register
  bx lr // take whatever is in the link register and go there

hello:
  // stack
  // registry SP = stack pointer
  // BL (Branch and Link) does the following

