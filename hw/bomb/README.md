# finding a way to disable the bomb

I used gdb to step through each phase of bomb diffusion to find the answer.

1. just look at the mov r1, #(some number) line
2. look at the .word in the done section. first input is just a number from the .word (converted to decimal from hex). second input is the second loaded number - the first input.
3. open the binary in a text editor using utf-8. the answer is one of the strings. use gdb to step through and try characters, looking at the strcmp line and r0. if r0 is large, the character is a lower ascii value. if r0 is small, the character is a lower ascii value. your sentence matches when r0 = 0.
4. sum of integers up to inputted number equals number found in done section (converted to decimal from hex). use python script to find this answer.
