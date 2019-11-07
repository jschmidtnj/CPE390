	.arch armv8-a
	.file	"sum.cpp"
	.text
	.align	2
	.p2align 3,,7
	.global	_Z1fPii
	.type	_Z1fPii, %function
_Z1fPii:
.LFB0:
	.cfi_startproc
	mov	x3, x0
	subs	w1, w1, #1
	bmi	.L4
	sxtw	x1, w1
	mov	w0, 0
	.p2align 3
.L3:
	ldr	w2, [x3, x1, lsl 2]
	sub	x1, x1, #1
	add	w0, w0, w2
	tbz	w1, #31, .L3
	ret
	.p2align 2
.L4:
	mov	w0, 0
	ret
	.cfi_endproc
.LFE0:
	.size	_Z1fPii, .-_Z1fPii
	.ident	"GCC: (Ubuntu/Linaro 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
