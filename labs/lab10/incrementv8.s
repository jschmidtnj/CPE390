.global _Z12addIncrementPii

_Z12addIncrementPii:
  .cfi_startproc
  cmp w1, #0
  ble out
  b incrementloop

incrementloop:
  ldr w2, [x0]
  add w2, w2, #1
  str w2, [x0], #4
  subs w1, w1, #1
  bgt incrementloop
  b out

out:
  ret
  .cfi_endproc

