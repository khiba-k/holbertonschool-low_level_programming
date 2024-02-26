	.file	"4-print_most_numbers.c"
	.text
	.globl	print_most_numbers
	.type	print_most_numbers, @function
print_most_numbers:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L2
.L4:
	movl	-4(%rbp), %edx
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
	movl	%edx, %ecx
	movl	%ecx, %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L3:
	cmpl	$2, -4(%rbp)
	jne	.L4
	cmpl	$4, -4(%rbp)
	jne	.L4
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9, -4(%rbp)
	jle	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_most_numbers, .-print_most_numbers
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
