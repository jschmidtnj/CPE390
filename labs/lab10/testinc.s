	.arch armv8-a
	.file	"testinc.cpp"
	.text
	.align	2
	.p2align 3,,7
	.global	_Z12addIncrementPii
	.type	_Z12addIncrementPii, %function
_Z12addIncrementPii:
.LFB0:
	.cfi_startproc
	cmp	w1, 0
	ble	.L1
	sub	w1, w1, #1
	add	x2, x0, 4
	add	x2, x2, x1, uxtw 2
	.p2align 3
.L3:
	ldr	w1, [x0]
	add	w1, w1, 1
	str	w1, [x0], 4
	cmp	x0, x2
	bne	.L3
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	_Z12addIncrementPii, .-_Z12addIncrementPii
	.ident	"GCC: (Ubuntu/Linaro 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
