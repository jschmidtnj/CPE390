//
// paper assembler practice: learn the instructions
// for each instruction write down the value of the register(s) affected next to it
//

mov	r0, #2		// example: r0 = 2
ldr	r1, =#100 // r1 = 100
mov	r2, #5		// r2 = 5
add	r3, r0,r1	// r3 = r0 + r1 = 102
sub	r1, #7		// r1 = r1 - 7 = 93
and	r4, r2,r1	// r4 = r2 + r1 = 105
orr	r5, r2,r1	// r5 = r2 or r1 = 101 | 1011101 = 1011101
eor	r6, r2,r1	// r6 = r2 xor r1 = 101 ^ 1011101 = 1011000
ldr	r3, =#0xFC12805C // 1111 1100 0001 0010 1000 0000 0101 1100
eor	r7, r1,r2	// r7 = r1 ^ r2 = 101 | 1011101 = 1011101
eor	r6, r6,r6	// = 0
and	r2, r2,r2	// = r2 = 5

  // loops
  mov r0, #0
loop: // do while loop - int i = 0; do { i++; } while (i < 5);
  add r0, #1
  cmp r0, #5
  blt loop

  // for(int i = 1; i < 5; i++) {}
  mov r0, #1
  cmp r0, #5
  bge out
loop2:
  add r0, #1
  cmp r0, #5
  blt loop2
out:

  mov r0, #0
loop3:
  cmp r0, #5
  bge out2
  add r0, #1
  b loop3
out2:

.L1: .ascii "ABCDEF"

add r0, #3 // immediate mode
ldr r2, .L1 // gets the data from memory location
ldrb r1, [r0] // loads A
add r3, r2, #1 // loads B


// add all characters in L1
  ldr r0, .L1
  mov r2, #0 // this is the result (sum) (immediate mode)
.loop3
  ldrb r1, [r0] // r1 = 'A' the first time
  cmp r1, #0
  beq out
  add r2, r1 // r2 = 0 + 'A'
  add r0, #1
  b .loop3

// last character in string is always 0 (null ascii char)
/*
int get_sum() {
  char * msg = "ABCDEF";
  int sum = 0;
  for (int i = 0; msg[i] != '\n'; i++) {
    sum += msg[i];
  }
  return sum;
}
*/