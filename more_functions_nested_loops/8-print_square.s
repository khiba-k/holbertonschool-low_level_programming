	.file	"8-print_square.c"
	.text
	.globl	print_square
	.type	print_square, @function
print_square:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movb	$35, -9(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L7:
	movl	$0, -4(%rbp)
	jmp	.L3
.L6:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L4
	movl	$99, %edi
	call	_putchar@PLT
	jmp	.L5
.L4:
	movl	$99, %edi
	call	_putchar@PLT
.L5:
	addl	$1, -4(%rbp)
.L3:
	movl	-4(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L6
	movl	$10, %edi
	call	_putchar@PLT
	addl	$1, -8(%rbp)
.L2:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L7
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_square, .-print_square
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