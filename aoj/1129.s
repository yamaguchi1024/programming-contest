	.file	"1129.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"%d %d"
.LC1:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1967:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$848, %rsp
.L14:
	leaq	-28(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jne	.L2
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jne	.L2
	jmp	.L16
.L2:
	movl	$0, -4(%rbp)
	jmp	.L4
.L5:
	movl	-24(%rbp), %eax
	subl	-4(%rbp), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	movl	%edx, -848(%rbp,%rax,4)
	addl	$1, -4(%rbp)
.L4:
	movl	-24(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L5
	movl	$0, -8(%rbp)
	jmp	.L6
.L13:
	leaq	-36(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	movl	$0, -12(%rbp)
	jmp	.L7
.L8:
	movl	-12(%rbp), %eax
	cltq
	movl	-848(%rbp,%rax,4), %edx
	movl	-12(%rbp), %eax
	cltq
	movl	%edx, -448(%rbp,%rax,4)
	addl	$1, -12(%rbp)
.L7:
	movl	-32(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	subl	$1, %eax
	cmpl	-12(%rbp), %eax
	jg	.L8
	movl	$0, -16(%rbp)
	jmp	.L9
.L10:
	movl	-36(%rbp), %edx
	movl	-16(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-16(%rbp), %eax
	cltq
	movl	-448(%rbp,%rax,4), %edx
	movslq	%ecx, %rax
	movl	%edx, -848(%rbp,%rax,4)
	addl	$1, -16(%rbp)
.L9:
	movl	-32(%rbp), %eax
	subl	$1, %eax
	cmpl	-16(%rbp), %eax
	jg	.L10
	movl	$0, -20(%rbp)
	jmp	.L11
.L12:
	movl	-32(%rbp), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	subl	$1, %eax
	cltq
	movl	-448(%rbp,%rax,4), %edx
	movl	-20(%rbp), %eax
	cltq
	movl	%edx, -848(%rbp,%rax,4)
	addl	$1, -20(%rbp)
.L11:
	movl	-36(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L12
	addl	$1, -8(%rbp)
.L6:
	movl	-28(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L13
	movl	-848(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	jmp	.L14
.L16:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1967:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L17
	cmpl	$65535, -8(%rbp)
	jne	.L17
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1972:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1973:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1973:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (SUSE Linux) 4.8.5"
	.section	.note.GNU-stack,"",@progbits
