.global _Z9factoriali, _Z8addRangeii

_Z8addRangeii:
  .cfi_startproc
  mov w2, #0 // the result
  cmp w0, w1
  ble addRangeLoop
  mov w0, #0 // return 0 if start > end
  ret
  .cfi_endproc

addRangeLoop:
  add w2, w2, w0 // add current to sum
  add w0, w0, #1 // add 1 to iterator
  cmp w0, w1 // check if less or equal to end
  ble addRangeLoop
  mov w0, w2
  ret

_Z9factoriali:
  .cfi_startproc
  cmp w0, #0 // check if zero input
  beq factorial_zero_input
  mov w1, #1 // iterator
  mov w2, #1 // the result
  b factorial_loop
  ret
  .cfi_endproc

factorial_loop:
  mul w2, w2, w1 // multiply by incrementor
  add w1, w1, #1 // increment iterator
  cmp w1, w0 // check if incrementor reached input
  ble factorial_loop
  mov w0, w2 // otherwise save result to output
  ret // and return

factorial_zero_input:
  mov w0, #1 // save 1 to result
  ret
