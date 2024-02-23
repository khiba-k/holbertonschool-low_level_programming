	.file	"8-24_hours.c"
	.text
	.globl	jack_bauer
	.type	jack_bauer, @function
jack_bauer:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -16(%rbp)
	jmp	.L2
.L11:
	movl	$0, -12(%rbp)
	jmp	.L3
.L10:
	movl	$0, -8(%rbp)
	jmp	.L4
.L9:
	movl	$0, -4(%rbp)
	jmp	.L5
.L8:
	movl	-16(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	-12(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	$58, %edi
	call	_putchar@PLT
	movl	-8(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	-4(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	$10, %edi
	call	_putchar@PLT
	cmpl	$2, -16(%rbp)
	jne	.L6
	cmpl	$3, -12(%rbp)
	jne	.L6
	cmpl	$5, -8(%rbp)
	jne	.L6
	cmpl	$9, -4(%rbp)
	je	.L12
.L6:
	addl	$1, -4(%rbp)
.L5:
	cmpl	$9, -4(%rbp)
	jle	.L8
	addl	$1, -8(%rbp)
.L4:
	cmpl	$5, -8(%rbp)
	jle	.L9
	addl	$1, -12(%rbp)
.L3:
	cmpl	$9, -12(%rbp)
	jle	.L10
	addl	$1, -16(%rbp)
.L2:
	cmpl	$2, -16(%rbp)
	jle	.L11
	jmp	.L1
.L12:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	jack_bauer, .-jack_bauer
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
