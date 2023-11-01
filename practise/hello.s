	.file	"hello.c"
	.text
	.globl	s1
	.data
	.align 16
	.type	s1, @object
	.size	s1, 28
s1:
	.long	1
	.string	"hello"
	.zero	14
	.long	1078523331
	.section	.rodata
.LC0:
	.string	"%d\t%s\t%f\n"
.LC1:
	.string	"enter the details\n:"
.LC2:
	.string	"%d%s%f"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movss	24+s1(%rip), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	s1(%rip), %eax
	leaq	4+s1(%rip), %rdx
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-48(%rbp), %rax
	leaq	24(%rax), %rcx
	leaq	-48(%rbp), %rax
	leaq	4(%rax), %rdx
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-24(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	-48(%rbp), %eax
	leaq	-48(%rbp), %rdx
	addq	$4, %rdx
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
