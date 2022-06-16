	.file	"output.s"

.STR0:	.string "Enter an integer: "
.STR1:	.string "Yes, It is a palindrome.\n"
.STR2:	.string "No, It is not a palindrome.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$108, %rsp
# 0:res = t000 
	movl	$0, -20(%rbp)
# 1:res = reversedInteger arg1 = t000 
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
# 2:res = t001 arg1 = t000 
	movl	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
# 3:
	movq	$.STR0,	%rdi
# 4:res = t002 
	pushq %rbp
	call	printStr
	movl	%eax, -28(%rbp)
	addq $8 , %rsp
# 5:res = t003 arg1 = err 
	leaq	-32(%rbp), %rax
	movq	%rax, -40(%rbp)
# 6:res = t003 
# 7:res = t004 
	pushq %rbp
	movq	-40(%rbp), %rdi
	call	readInt
	movl	%eax, -44(%rbp)
	addq $0 , %rsp
# 8:res = n arg1 = t004 
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
# 9:res = t005 arg1 = t004 
	movl	-44(%rbp), %eax
	movl	%eax, -48(%rbp)
# 10:res = originalInteger arg1 = n 
	movl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
# 11:res = t006 arg1 = n 
	movl	-4(%rbp), %eax
	movl	%eax, -52(%rbp)
# 12:res = t007 
.L3:
	movl	$0, -56(%rbp)
# 13:arg1 = n arg2 = t007 
	movl	-4(%rbp), %eax
	movl	-56(%rbp), %edx
	cmpl	%edx, %eax
	jne .L1
# 14:
	jmp .L2
# 15:
	jmp .L2
# 16:res = t008 
.L1:
	movl	$10, -60(%rbp)
# 17:res = t009 arg1 = n arg2 = t008 
	movl	-4(%rbp), %eax
	cltd
	idivl	-60(%rbp), %eax
	movl	%edx, -64(%rbp)
# 18:res = remainder arg1 = t009 
	movl	-64(%rbp), %eax
	movl	%eax, -12(%rbp)
# 19:res = t010 arg1 = t009 
	movl	-64(%rbp), %eax
	movl	%eax, -68(%rbp)
# 20:res = t011 
	movl	$10, -72(%rbp)
# 21:res = t012 arg1 = reversedInteger arg2 = t011 
	movl	-8(%rbp), %eax
	imull	-72(%rbp), %eax
	movl	%eax, -76(%rbp)
# 22:res = t013 arg1 = t012 arg2 = remainder 
	movl	-76(%rbp), %eax
	movl	-12(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -80(%rbp)
# 23:res = reversedInteger arg1 = t013 
	movl	-80(%rbp), %eax
	movl	%eax, -8(%rbp)
# 24:res = t014 arg1 = t013 
	movl	-80(%rbp), %eax
	movl	%eax, -84(%rbp)
# 25:res = t015 
	movl	$10, -88(%rbp)
# 26:res = t016 arg1 = n arg2 = t015 
	movl	-4(%rbp), %eax
	cltd
	idivl	-88(%rbp), %eax
	movl	%eax, -92(%rbp)
# 27:res = n arg1 = t016 
	movl	-92(%rbp), %eax
	movl	%eax, -4(%rbp)
# 28:res = t017 arg1 = t016 
	movl	-92(%rbp), %eax
	movl	%eax, -96(%rbp)
# 29:
	jmp .L3
# 30:arg1 = originalInteger arg2 = reversedInteger 
.L2:
	movl	-16(%rbp), %eax
	movl	-8(%rbp), %edx
	cmpl	%edx, %eax
	je .L4
# 31:
	jmp .L5
# 32:
	jmp .L6
# 33:
.L4:
	movq	$.STR1,	%rdi
# 34:res = t018 
	pushq %rbp
	call	printStr
	movl	%eax, -100(%rbp)
	addq $8 , %rsp
# 35:
	jmp .L6
# 36:
.L5:
	movq	$.STR2,	%rdi
# 37:res = t019 
	pushq %rbp
	call	printStr
	movl	%eax, -104(%rbp)
	addq $8 , %rsp
# 38:
	jmp .L6
# 39:res = t020 
.L6:
	movl	$0, -108(%rbp)
# 40:res = t020 
	movl	-108(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-108, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
