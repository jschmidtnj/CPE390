# assembly code

code for assembly functions

- pc = program counter
- lr = link register is your stack for a single function call (no calling additional functions, or you won't know where you came from)
- `bl f` is equal to:
  - lr = pc + 4
  - pc = f
- for multiple levels deep, push lr onto the stack, then pop at the end
  - push {lr} - push lr to stack
  - bl f - branch to f
    - bx lr - return from f
  - pop {pc} - go back to lr
- if you started at function a, you call b with `bl b`
  - then you `push {lr}` to push lr to the stack
  - then you `bl f` to branch to c
  - then you `bx lr` to return from c
  - then you `pop {pc}` to go back to a
- push = add, pop = remove (shrink)
