	.file	"4-rev_array.c"
	.text
	.globl	reverse_array
	.type	reverse_array, @function
reverse_array:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$448, %rsp
	movq	%rdi, -440(%rbp)
	movl	%esi, -444(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -432(%rbp)
	movl	-444(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -420(%rbp)
	movl	$0, -428(%rbp)
	movl	$0, -424(%rbp)
	jmp	.L2
.L3:
	movl	-424(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-440(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-428(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -428(%rbp)
	addl	$1, -424(%rbp)
.L2:
	movl	-428(%rbp), %eax
	cmpl	-444(%rbp), %eax
	jl	.L3
	cmpl	$0, -444(%rbp)
	jle	.L8
	jmp	.L5
.L6:
	movl	-432(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-440(%rbp), %rax
	addq	%rax, %rdx
	movl	-420(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, (%rdx)
	subl	$1, -420(%rbp)
	addl	$1, -432(%rbp)
.L5:
	movl	-432(%rbp), %eax
	cmpl	-444(%rbp), %eax
	jl	.L6
.L8:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	reverse_array, .-reverse_array
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
