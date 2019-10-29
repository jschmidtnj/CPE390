mov r0, #5
mov r1, #3
ldr r2, =#76
add r6, r0, r1 // r6=8
sub r7, r1, r2 // r7=3-76=-73
// r1 = 11
// r2 = 1001100
and r3, r1, r2 // 0
orr r4, r0, r1 // 7
eor r5, r1, r2
// compile with g++ -o examples.s
// if you compile without -o (creates object), this gets an error because it's looking
// for the main function


// some loops review

// FOR LOOP

// for (int i = 0; i < n; i++) {}
.global _Z2f1i

_Z2f1i:
  mov r1, #0
  cmp r1, r0
  blt out
loop:
  add r1, #1
  cmp r1, #0
  blt loop
out:
  bx lr


// DO WHILE LOOP

// do {} while (i < 100);
_Z2f2i:
  mov r1, #0
loop:
  add r1, #1
  cmp r1, #0
  blt loop
out:
  bx lr


// MORE EFFICIENT
_Z2f3i:
loop:
  subs r0, #1 # substract by 1 and compare to zero (substraction is faster than adding)
  bgt loop
  bx lr

// flags
// Z C V N
// cmp means subtract and set the Z flag to zero if the result is zero
// Z - last result was zero
// C - carry flag set to 1 if you go over 2 billion
// V - 1 if overflow
// N - 1 if result is negative
