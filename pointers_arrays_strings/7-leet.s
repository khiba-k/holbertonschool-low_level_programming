	.file	"7-leet.c"
	.text
	.globl	leet
	.type	leet, @function
leet:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-56(%rbp), %rax
	movq	%rax, -32(%rbp)
	movl	$1953457505, -18(%rbp)
	movb	$108, -14(%rbp)
	movl	$117441284, -13(%rbp)
	movb	$1, -9(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L2
.L7:
	movl	$0, -36(%rbp)
	jmp	.L3
.L6:
	movq	-56(%rbp), %rax
	movzbl	(%rax), %edx
	movl	-36(%rbp), %eax
	cltq
	movzbl	-18(%rbp,%rax), %eax
	cmpb	%al, %dl
	je	.L4
	movq	-56(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	movl	-36(%rbp), %eax
	cltq
	movzbl	-18(%rbp,%rax), %eax
	movsbl	%al, %eax
	subl	$32, %eax
	cmpl	%eax, %edx
	jne	.L5
.L4:
	movl	-36(%rbp), %eax
	cltq
	movzbl	-13(%rbp,%rax), %eax
	addl	$48, %eax
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movb	%dl, (%rax)
.L5:
	addl	$1, -36(%rbp)
.L3:
	cmpl	$4, -36(%rbp)
	jle	.L6
	addq	$1, -56(%rbp)
.L2:
	movq	-56(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L7
	movq	-32(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	leet, .-leet
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
