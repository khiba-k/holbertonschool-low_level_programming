	.file	"9-times_table.c"
	.text
	.globl	times_table
	.type	times_table, @function
times_table:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$0, -20(%rbp)
	jmp	.L2
.L6:
	movl	$0, -16(%rbp)
	jmp	.L3
.L5:
	movl	-16(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	cmpl	$9, -12(%rbp)
	jle	.L4
	movl	-12(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	sarl	$2, %eax
	movl	%edx, %esi
	sarl	$31, %esi
	subl	%esi, %eax
	movl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, -8(%rbp)
	movl	-12(%rbp), %eax
	subl	-8(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	movl	%eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	movl	%eax, -4(%rbp)
	movl	$44, %edi
	call	_putchar@PLT
	movl	$32, %edi
	call	_putchar@PLT
	movl	-4(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	-8(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L4:
	movl	$10, %edi
	call	_putchar@PLT
	addl	$1, -16(%rbp)
.L3:
	cmpl	$9, -16(%rbp)
	jle	.L5
	addl	$1, -20(%rbp)
.L2:
	cmpl	$9, -20(%rbp)
	jle	.L6
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	times_table, .-times_table
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
