	.file	"main.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$9, -48(%rbp)
	movl	$8, -44(%rbp)
	movl	$7, -40(%rbp)
	movl	$6, -36(%rbp)
	movl	$5, -32(%rbp)
	movl	$4, -28(%rbp)
	movl	$3, -24(%rbp)
	movl	$2, -20(%rbp)
	movl	$1, -16(%rbp)
	movl	$0, -12(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	print_array@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	sort_array@PLT
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	print_array@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
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
