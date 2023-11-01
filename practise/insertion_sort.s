	.file	"insertion_sort.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"enter how many elemnts do u want:"
.LC1:
	.string	"%d"
.LC2:
	.string	"enter the array elemnts:"
.LC3:
	.string	"%d\t"
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
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -420(%rbp)
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-432(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, -424(%rbp)
	jmp	.L2
.L3:
	leaq	-416(%rbp), %rax
	movl	-424(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -424(%rbp)
.L2:
	movl	-432(%rbp), %eax
	cmpl	%eax, -424(%rbp)
	jle	.L3
	movl	$1, -428(%rbp)
	jmp	.L4
.L8:
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -420(%rbp)
	movl	-428(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -424(%rbp)
	jmp	.L5
.L7:
	movl	-424(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movslq	%ecx, %rax
	movl	%edx, -416(%rbp,%rax,4)
	subl	$1, -424(%rbp)
.L5:
	cmpl	$0, -424(%rbp)
	jle	.L6
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, -420(%rbp)
	jl	.L7
.L6:
	movl	-424(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-420(%rbp), %edx
	movl	%edx, -416(%rbp,%rax,4)
	addl	$1, -428(%rbp)
.L4:
	movl	-432(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jle	.L8
	movl	$1, -424(%rbp)
	jmp	.L9
.L10:
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -424(%rbp)
.L9:
	movl	-432(%rbp), %eax
	cmpl	%eax, -424(%rbp)
	jle	.L10
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L12
	call	__stack_chk_fail@PLT
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
