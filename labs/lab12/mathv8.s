// I pledge my honor that I have abided by the Stevens Honor System. -Joshua Schmidt
.global _Z4multii

// int mult(int a, int b)
_Z4multii:
  .cfi_startproc
  mov w2, w0 // w2 = a
  mov w0, #0 // w0 = result
  mov w3, #0 // w3 = count
multloop:
  cmp w1, #0
  ble multout
  ands w4, w1, #1 // if (b & 1)
  beq else // else b & 1 == 0
  lsl w4, w2, w3 // w4 = a << count
  add w0, w0, w4 // result += a << count
else:
  add w3, w3, #1 // count++
  lsr w1, w1, #1 // b = b / 2
  b multloop
multout:
  ret
  .cfi_endproc

