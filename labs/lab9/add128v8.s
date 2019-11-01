.global _Z6add128R6BigNumRKS_S2_

_Z6add128R6BigNumRKS_S2_:
  .cfi_startproc
  ldr w6, [x1, #12]
  ldr w4, [x2, #12]
  adds w5, w6, w4
  str w5, [x0, #12]

  ldr w6, [x1, #8]
  ldr w4, [x2, #8]
  adcs w5, w6, w4
  str w5, [x0, #8]

  ldr w6, [x1, #4]
  ldr w4, [x2, #4]
  adcs w5, w6, w4
  str w5, [x0, #4]

  ldr w6, [x1]
  ldr w4, [x2]
  adc w5, w6, w4
  str w5, [x0]
  ret
  .cfi_endproc
