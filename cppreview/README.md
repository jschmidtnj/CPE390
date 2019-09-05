# notes

user, group, global:

```sh
drwxr-xr-x  2 joshua joshua 4096 Aug 29 14:38 .
drwxr-xr-x 10 joshua joshua 4096 Aug 29 14:38 ..
-rw-r--r--  1 joshua joshua  212 Aug 29 14:38 test.cc
```

`g++ -O2 -S day2.cpp <- generates assembly code`

- CPU = central processing unit (microprocessor)
- control unit = address bus (specifies which memory, read or write)
- data bus - communicates with memory
- arithmetic logic unit (alu) - data operations
- registers (16 registers on raspberry pi 32 bit mode)
- cache - fast memory remembering
- different layers / levels of cache

arduinos - the uno is accurate to delayMicroseconds(1244); - the 4 microseconds. multiples of 4
