.global _Z3addii
.global _Z3subii
_Z3addii:
  .cfi_startproc
  add w0, w0, w1
  ret
  .cfi_endproc
_Z3subii:
  .cfi_startproc
  sub w0, w0, w1
  ret
  .cfi_endproc

