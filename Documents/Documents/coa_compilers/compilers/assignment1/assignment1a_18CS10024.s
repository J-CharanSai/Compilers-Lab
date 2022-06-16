	.file	"assgn1a.c"
	.text
	.section	.rodata
.LC0:
	.string	"\nThe greater number is: %d"
	.text
	.globl	main
	.type	main, @function
main:			#main function is starting.
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp		#pushing rbp into the stack.
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#copying rsp to rbp.
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#allotting 16 bytes memory to stack.
	movl	$45, -8(%rbp)	#mem[rbp-8] = 45. 
	movl	$68, -4(%rbp)	#mem[rbp-4] = 68.
	movl	-8(%rbp), %eax	#mem[rbp-8] = eax.
	cmpl	-4(%rbp), %eax	#comparing mem[rbp-4] with eax.
	jle	.L2					#jump to step L2 if mem[rbp-4]<=eax.
	movl	-8(%rbp), %eax	#if jump not happened do eax = mem[rbp-8].
	movl	%eax, -12(%rbp)	#mem[rbp-12] = eax.
	jmp	.L3					#jump to .L3.
.L2:
	movl	-4(%rbp), %eax 	#eax = mem[rbp-4].
	movl	%eax, -12(%rbp)	#mem[rbp-12] = eax.
.L3:
	movl	-12(%rbp), %eax #eax = mem[rbp-12].
	movl	%eax, %esi  	#esi = eax.
	leaq	.LC0(%rip), %rdi	#copy address of .LC0 to rdi.
	movl	$0, %eax 		#eax = 0.
	call	printf@PLT		#calling print function.
	movl	$0, %eax 		#eax = 0.
	leave
	.cfi_def_cfa 7, 8
	ret 					#returning return value of function.
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
