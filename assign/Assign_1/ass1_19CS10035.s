	.file	"ass1_19CS10035.c"  #Source file name
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4			#align with 4-byte boundary
LC0:
	.ascii "Enter how many elements you want:\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Enter the %d elements:\12\0"
LC3:
	.ascii "\12Enter the item to search\0"
LC4:
	.ascii "\12%d found in position: %d\12\0"
	.align 4
LC5:
	.ascii "\12Item is not present in the list.\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$432, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	leal	420(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	420(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, 428(%esp)
	jmp	L2
L3:
	leal	20(%esp), %eax
	movl	428(%esp), %edx
	sall	$2, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	addl	$1, 428(%esp)
L2:
	movl	420(%esp), %eax
	cmpl	%eax, 428(%esp)
	jl	L3
	movl	420(%esp), %eax
	movl	%eax, 4(%esp)
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_inst_sort
	movl	$LC3, (%esp)
	call	_puts
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	16(%esp), %edx
	movl	420(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_bsearch
	movl	%eax, 424(%esp)
	movl	424(%esp), %eax
	movl	20(%esp,%eax,4), %edx
	movl	16(%esp), %eax
	cmpl	%eax, %edx
	jne	L4
	movl	424(%esp), %eax
	leal	1(%eax), %edx
	movl	16(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	jmp	L5
L4:
	movl	$LC5, (%esp)
	call	_puts
L5:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.globl	_inst_sort
	.def	_inst_sort;	.scl	2;	.type	32;	.endef
_inst_sort:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$1, -8(%ebp)
	jmp	L8
L12:
	movl	-8(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -4(%ebp)
	jmp	L9
L11:
	movl	-4(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	-4(%ebp), %edx
	addl	$1, %edx
	leal	0(,%edx,4), %ecx
	movl	8(%ebp), %edx
	addl	%ecx, %edx
	movl	(%eax), %eax
	movl	%eax, (%edx)
	subl	$1, -4(%ebp)
L9:
	cmpl	$0, -4(%ebp)
	js	L10
	movl	-4(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	cmpl	%eax, -12(%ebp)
	jl	L11
L10:
	movl	-4(%ebp), %eax
	addl	$1, %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%eax, (%edx)
	addl	$1, -8(%ebp)
L8:
	movl	-8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jl	L12
	nop
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_bsearch
	.def	_bsearch;	.scl	2;	.type	32;	.endef
_bsearch:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$1, -8(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
L17:
	movl	-8(%ebp), %edx
	movl	-4(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	cmpl	%eax, 16(%ebp)
	jge	L14
	movl	-12(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -4(%ebp)
	jmp	L15
L14:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	cmpl	%eax, 16(%ebp)
	jle	L15
	movl	-12(%ebp), %eax
	addl	$1, %eax
	movl	%eax, -8(%ebp)
L15:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	cmpl	%eax, 16(%ebp)
	je	L16
	movl	-8(%ebp), %eax
	cmpl	-4(%ebp), %eax
	jle	L17
L16:
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
