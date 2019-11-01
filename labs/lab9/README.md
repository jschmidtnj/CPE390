# lab 9

```bash
mov r0, #7
ldr r1, =#63391203
loop:
  and r1, r1, r0
  subs r0, #1
  bne loop
```
- first loop:
  - r0 = 7, r1 = 63391203
  - r1 = r1 & r0 = 63391203 & 7 = ...011 & 0...0111
  - r1 = 11 = 3
  - r0 = 7 - 1 = 6
  - r0 = 6, r1 = 3
- second loop:
  - r1 = r1 & r0 = 3 & 6 = 011 & 110 = 010 = 2
  - r0 = 6 - 1 = 5
  - r0 = 5, r1 = 2
- third loop:
  - r1 = r1 & r0 = 2 & 5 = 010 & 101 = 000 = 0
  - r0 = 5 - 1 = 4
  - r0 = 4, r1 = 0
- end result:
  - 0 & anything = 0 -> r1 = 0
  - r1 stops when equals 0 (subs)
  - r0 = 0, r1 = 0

