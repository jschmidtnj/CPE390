// I pledge my honor that I have abided by the Stevens Honor System. -Joshua Schmidt
.global _Z5powerii

// int power(int b, int n)
_Z5powerii:
  .cfi_startproc
  mov w2, w0 // w2 is the base
  mov w0, #1 // now w0 is the result
  cmp w1, #0 // this is the count
  ble out
  b powerloop
powerloop:
  mul w0, w0, w2
  subs w1, w1, #1
  bgt powerloop
  b out
out:
  ret
  .cfi_endproc

.global _Z8multiplyii

_Z8multiplyii:
  .cfi_startproc
  lsl w0, w0, w1
  ret
  .cfi_endproc

