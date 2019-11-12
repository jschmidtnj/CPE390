	.arch armv8-a
	.file	"testdotprod.cpp"
	.text
	.align	2
	.p2align 3,,7
	.global	_Z11testdotprodPdS_i
	.type	_Z11testdotprodPdS_i, %function
_Z11testdotprodPdS_i:
.LFB0:
	.cfi_startproc
	movi	d0, #0
	cmp	w2, 0
	ble	.L1
	mov	x3, 0
	.p2align 3
.L3:
	ldr	d2, [x0, x3, lsl 3]
	ldr	d1, [x1, x3, lsl 3]
	add	x3, x3, 1
	cmp	w2, w3
	fmadd	d0, d2, d1, d0
	bgt	.L3
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	_Z11testdotprodPdS_i, .-_Z11testdotprodPdS_i
	.ident	"GCC: (Ubuntu/Linaro 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
