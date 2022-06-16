	.file	"ass1_19CS10035.c"	# source file name
	.text				
	.section	.rodata	# read-only data section
	.align 8			# align with 8-byte boundry
.LC0:					# Label of f-string-1st printf
	.string	"Enter how many elements you want:"
.LC1:					# Label of f-string scanf
	.string	"%d"
.LC2:					# Label of f-string-2nd printf
	.string	"Enter the %d elements:\n"
.LC3:					# Label of f-string-3rd printf
	.string	"\nEnter the item to search"
.LC4:					# Label of f-string-4th printf
	.string	"\n%d found in position: %d\n"
	.align 8
.LC5:					# Label of f-string-5th printf
	.string	"\nItem is not present in the list."
	.text				# code starts
	.globl	main			# main global name
	.type	main, @function	# main is a function:
main:					# main: starts
.LFB0:					
	.cfi_startproc			# Call frame information
	endbr64			# end branch 64 bit
	pushq	%rbp			# save old base pointer
	.cfi_def_cfa_offset 16		# cfi directives
	.cfi_offset 6, -16		# cfi directives
	movq	%rsp, %rbp		# rbp <-- rsp set new stack pointer
	.cfi_def_cfa_register 6	# cfi directives
	subq	$432, %rsp		# Create space for local array and variables
	movq	%fs:40, %rax		# Get first parameter for first printf, fstring
	movq	%rax, -8(%rbp)		# save rbp
	xorl	%eax, %eax		# setting register eax to 0 (return value)
	leaq	.LC0(%rip), %rdi	# rdi <-- 1st parameter of printf, fstring
	call	puts@PLT		# Calls puts for printf
	leaq	-432(%rbp), %rax	# rax <-- (rba-432) (&n) 
	movq	%rax, %rsi		# rsi <-- rax (2nd parameter)
	leaq	.LC1(%rip), %rdi	# rdi <-- 1st parameter for 1st scanf, fstring
	movl	$0, %eax		# eax <-- 0
	call	__isoc99_scanf@PLT	# Call scanf, return value is in eax
	movl	-432(%rbp), %eax	# eax <-- M[rbp-432] (n)
	movl	%eax, %esi		# esi <-- eax (2nd parameter)
	leaq	.LC2(%rip), %rdi	# rdi <-- 1st parameter for 2nd printf, fstring
	movl	$0, %eax		# eax <-- 0
	call	printf@PLT		# Calls puts for printf
	movl	$0, -424(%rbp)		# M[rbp-424] <-- 0 (i = 0) init loop
	jmp	.L2			# goto .L2 , for loop condition check
.L3:
	leaq	-416(%rbp), %rax	# rax <-- (rbp-416) (a)
	movl	-424(%rbp), %edx	# edx <-- M[rbp-424] (i)
	movslq	%edx, %rdx		# rdx <-- edx (32 bits to sign extension 64 bits)
	salq	$2, %rdx		# rdx left shift by 2 rdx <-- 4*rdx (4*i))
	addq	%rdx, %rax		# rax <-- a + 4*i
	movq	%rax, %rsi		# rsi <-- a[i]
	leaq	.LC1(%rip), %rdi	# rdi <-- 1st parameter for 1st scanf, fstring 
	movl	$0, %eax		# eax <-- 0
	call	__isoc99_scanf@PLT	# Calls scanf, return value is in &a[i]
	addl	$1, -424(%rbp)		# M[rbp-424] = 1+M[rbp-424]   (i = 1+i increment )
.L2:
	movl	-432(%rbp), %eax	# eax <-- M[rbp-432] (n)
	cmpl	%eax, -424(%rbp)	# if M[rbp-424] < eax, (i<n)
	jl	.L3			# goto .L3 (jump less than n)
	movl	-432(%rbp), %edx	# edx <-- M[rbp-432] (n) (2nd parameter)
	leaq	-416(%rbp), %rax	# rax <-- (rbp-416) (&a) (1st parameter) 
	movl	%edx, %esi		# esi <-- edx 
	movq	%rax, %rdi		# rdi <-- rax 
	call	inst_sort		# call inst_sort
	leaq	.LC3(%rip), %rdi	# rdi <-- 2nd parameter of printf
	call	puts@PLT		# calls puts for printf
	leaq	-428(%rbp), %rax	# rax <-- (rbp-428) (&item)
	movq	%rax, %rsi		# rsi <-- rax (3rd parameter) 
	leaq	.LC1(%rip), %rdi	# rdi <-- 1st parameter for 2nd scanf 
	movl	$0, %eax		# eax <-- 0
	call	__isoc99_scanf@PLT	# calls scanf, return value is in &item
	movl	-428(%rbp), %edx	# edx <-- M[rbp-428] (item) (3rd parameter) 
	movl	-432(%rbp), %ecx	# ecx <-- M[rbp-432] (n) (2nd parameter)
	leaq	-416(%rbp), %rax	# rax <-- (rbp-416) (&a) (1st parameter)
	movl	%ecx, %esi		# esi <-- ecx  
	movq	%rax, %rdi		# rdi <-- rax 
	call	bsearch		# calls bsearch
	movl	%eax, -420(%rbp)	# M[rbp-420] <-- eax
	movl	-420(%rbp), %eax	# eax <-- M[rbp-420]
	cltq				# rax <-- eax
	movl	-416(%rbp,%rax,4), %edx	# edx <-- M[rbp-416+rax*4]
	movl	-428(%rbp), %eax	# eax <-- M[rbp-428] (item)
	cmpl	%eax, %edx		# compare edx != eax (jump not equal) (if a[loc] != item) 
	jne	.L4			# goto .L4 
	movl	-420(%rbp), %eax	# eax <-- M[rbp-420]
	leal	1(%rax), %edx		# edx <-- (rax+1) 
	movl	-428(%rbp), %eax	# eax <-- M[rbp-428]
	movl	%eax, %esi		# esi <-- eax 
	leaq	.LC4(%rip), %rdi	# rdi <-- starting address of printf format string 1st parameter
	movl	$0, %eax		# eax <-- 0
	call	printf@PLT		# calls printf 
	jmp	.L5			# goto .L5
.L4:
	leaq	.LC5(%rip), %rdi	# rdi <-- 6th format string argument 
	call	puts@PLT		# call printf (4th call) 
.L5:
	movl	$0, %eax		# eax <-- 0 (return value is 0)
	movq	-8(%rbp), %rcx		# rck <-- M[rbp-8]
	xorq	%fs:40, %rcx		# Check if equal to original value
	je	.L7			# goto .L7
	call	__stack_chk_fail@PLT	# stack check fail  no return
.L7:	
	leave				# remove stack frame
	.cfi_def_cfa 7, 8		# cfi directive 
	ret				# return 
	.cfi_endproc			# cfi directive (end programe)
.LFE0:
	.size	main, .-main
	.globl	inst_sort		# insertion sort in global
	.type	inst_sort, @function
inst_sort:
.LFB1:
	.cfi_startproc			# cfi directives
	endbr64
	pushq	%rbp			# save old base pointer
	.cfi_def_cfa_offset 16		# cfi directives
	.cfi_offset 6, -16		# cfi directives
	movq	%rsp, %rbp		# stack pointer is new base pointer
	.cfi_def_cfa_register 6	# cfi directives
	movq	%rdi, -24(%rbp)	# M[rbp - 24] <-- num
	movl	%esi, -28(%rbp)	# M[rbp - 28] <-- n
	movl	$1, -8(%rbp)		# j <-- 1 
					# init outer loop
	jmp	.L9			# goto .L9 
					# test of outer loop
.L13:
	movl	-8(%rbp), %eax		# eax <-- M[rbp-8] (j)
	cltq				# rax <-- eax , convering to quad 
	leaq	0(,%rax,4), %rdx	# rdx <-- 0+rax*4 (0+j*4)
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24] (num[0])
	addq	%rdx, %rax		# rax <-- rdx + rax , storing address of num[j]
	movl	(%rax), %eax		# eax <-- rax (num[j])
	movl	%eax, -4(%rbp)		# M[rbp-4] <-- eax (num[j] = k) 
	movl	-8(%rbp), %eax		# eax <-- M[rbp-8]j
	subl	$1, %eax		# eax <-- eax - 1 (j-1)
	movl	%eax, -12(%rbp)	# M[rbp-12] <-- eax (i = j-1)
	jmp	.L10			# goto .L10, for loop starts 
.L12:
	movl	-12(%rbp), %eax	# eax <-- M[rbp-12] (i)
	cltq				# converting eax to quad word , rax <-- eax
	leaq	0(,%rax,4), %rdx	# rdx <-- 0+rax*4
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24] (num[0])
	addq	%rdx, %rax		# rax <-- rdx+rax 
	movl	-12(%rbp), %edx	# edx <-- M[rbp-12] (i)
	movslq	%edx, %rdx		# extended edx to rdx 
	addq	$1, %rdx		# rdx <-- rdx + 1
	leaq	0(,%rdx,4), %rcx	# rcx <-- 0+rdx*4
	movq	-24(%rbp), %rdx	# rdx <-- M[rbp-24] (num[0])
	addq	%rcx, %rdx		# rdx <-- rcx + rdx , num[i+1] <-- rdx+num[i]
	movl	(%rax), %eax		# eax <-- rax 
	movl	%eax, (%rdx)		# rdx <-- eax 
	subl	$1, -12(%rbp)		# M[rbp-12] = M[rbp-12] - 1, i = i-1 
.L10:
	cmpl	$0, -12(%rbp)		# jump if sign (i<0)
	js	.L11			# goto .L11 jump if i < 0
	movl	-12(%rbp), %eax	# eax <-- M[rbp-12] (i)
	cltq				# rax <-- eax converting eax to quad 
	leaq	0(,%rax,4), %rdx	# rdx <-- (0+rax*4) 
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24] (num[0])
	addq	%rdx, %rax		# rax <-- rdx + rax 
	movl	(%rax), %eax		# eax <-- M[rax] (num[i])
	cmpl	%eax, -4(%rbp)		# M[rbp-4] <-- eax (num[i])
	jl	.L12			# goto .L12 (jumo less than) 
.L11:
	movl	-12(%rbp), %eax	# eax <-- M[rbp-12] (i)
	cltq				# rax <-- eax
	addq	$1, %rax		# rax <-- rax + 1 (i<--i+1)
	leaq	0(,%rax,4), %rdx	# rdx <-- (0+rax*4)
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24] 
	addq	%rax, %rdx		# rdx <-- rax + rdx
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4] (k)
	movl	%eax, (%rdx)		# M[rdx] <-- eax (num[i+1] <-- k)
	addl	$1, -8(%rbp)		# M[rbp-8] <-- M[rbp-8]+1 (j <-- j+1)
.L9:
	movl	-8(%rbp), %eax		# eax <-- n
	cmpl	-28(%rbp), %eax	# if eax > M[rbp-28] (n>j)
	jl	.L13			# goto .L13 (jump if less than n)
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8		# cfi directive 
	ret				# return 
	.cfi_endproc			# cfi directive end programe
.LFE1:
	.size	inst_sort, .-inst_sort	
	.globl	bsearch		# bsearch in global
	.type	bsearch, @function
bsearch:
.LFB2:
	.cfi_startproc			# cfi directives
	endbr64
	pushq	%rbp			# save old base pointer
	.cfi_def_cfa_offset 16		# cfi directives
	.cfi_offset 6, -16		# cfi rirectives
	movq	%rsp, %rbp		# rbp <-- rsp stack pointer to new base pointer
	.cfi_def_cfa_register 6	# cfi directives
	movq	%rdi, -24(%rbp)	# M[rbp - 24] <-- rdi (a)
	movl	%esi, -28(%rbp)	# M[rbp - 28] <-- esi (item)
	movl	%edx, -32(%rbp)	# M[rbp - 32] <-- edx (n)
	movl	$1, -8(%rbp)		# M[rbp-8] <-- 1 (bottom <-- 1)
	movl	-28(%rbp), %eax	# eax <-- M[rbp-28] (n)
	movl	%eax, -12(%rbp)	# M[rbp-12] <-- eax (top <-- n)
.L18:
	movl	-8(%rbp), %edx		# edx <-- M[rbp-8] (bottomm)
	movl	-12(%rbp), %eax	# eax <-- M[rbp-12] (top)
	addl	%edx, %eax		# eax <-- edx + eax , top + bottom
	movl	%eax, %edx		# edx <-- eax
	shrl	$31, %edx		# shifting edx by 31 bits, edx = edx >> 32
	addl	%edx, %eax		# eax <-- eax + edx
	sarl	%eax			# eax <-- eax >> 2 , mid = (bottom + top) /2
	movl	%eax, -4(%rbp)		# M[rbp-4] <-- eax 
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4]
	cltq				# converting eax to quad word i.e. to signed value, to be used as index(eax -> rax)
	leaq	0(,%rax,4), %rdx	# rdx <-- 0+rax*4
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24] (a[0])
	addq	%rdx, %rax		# rax <-- rax + rdx , rax <-- a[0] + rdx = num[mid]
	movl	(%rax), %eax		# eax <-- rax
	cmpl	%eax, -32(%rbp)	# compare eax and M[rbp-32] (item)
	jge	.L15			# if item >= a[mid] jump to .L15 else break
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4] (mid)
	subl	$1, %eax		# eax <-- eax-1 
	movl	%eax, -12(%rbp)	# M[rbp-12] <-- eax storing value of mid-1
	jmp	.L16			# jump to .L16
.L15:
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4]
	cltq				# converting eax to quad word i.e. to signed value, to be used as index (eax -> rax)
	leaq	0(,%rax,4), %rdx	# rdx <-- 0+rax*4
	movq	-24(%rbp), %rax	# rax <-- M[rbp-24]
	addq	%rdx, %rax		# rax <-- rax + rdx 
	movl	(%rax), %eax		# eax <-- rax
	cmpl	%eax, -32(%rbp)	# comparing value at M[rbp-32] (item) 
	jle	.L16			# item <= a[mid] jump to .L16
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4] (mid)
	addl	$1, %eax		# eax <-- eax +1, mid = mid+1
	movl	%eax, -8(%rbp)		# M[rbp-8] <-- eax , bottom = mid+1
.L16:
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4] (mid)
	cltq				# converting to quad word i.e. to signed value, to be used as index(eax -> rax)
	leaq	0(,%rax,4), %rdx	# rdx <-- 0+rax*4
	movq	-24(%rbp), %rax	# rdx <-- M[rbp-24] (a[0])
	addq	%rdx, %rax		# rax <-- rdx + rax 
	movl	(%rax), %eax		# eax <-- rax
	cmpl	%eax, -32(%rbp)	# eax <-- M[rbp-32]
	je	.L17			# if item == a[mid], then jump to .L17
	movl	-8(%rbp), %eax		# eax <-- M[rbp-8] (bottom to eax)
	cmpl	-12(%rbp), %eax	# compare M[rbp-8] and eax(bottom)
	jle	.L18			# if bottom <= top, then jump to .L18
.L17:
	movl	-4(%rbp), %eax		# eax <-- M[rbp-4] settign the return value of bsearch 
	popq	%rbp			# restoring base pointer 
	.cfi_def_cfa 7, 8		# cfi directive
	ret				# return 
	.cfi_endproc			# cfi directive (end programe)
.LFE2:
	.size	bsearch, .-bsearch
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
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
