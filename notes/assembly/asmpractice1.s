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
loop: // do while loop - int i = 0; do {} while (i < 5);
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
