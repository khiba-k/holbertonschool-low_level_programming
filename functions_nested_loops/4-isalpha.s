	.file	"4-isalpha.c"
	.text
	.globl	_isalpha
	.type	_isalpha, @function
_isalpha:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$96, -4(%rbp)
	jle	.L2
	cmpl	$122, -4(%rbp)
	jle	.L3
.L2:
	cmpl	$64, -4(%rbp)
	jle	.L4
	cmpl	$90, -4(%rbp)
	jg	.L4
.L3:
	movl	$1, %eax
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_isalpha, .-_isalpha
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
