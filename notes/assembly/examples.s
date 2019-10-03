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
