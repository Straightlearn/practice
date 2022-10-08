	.text
	.syntax unified
	.eabi_attribute	67, "2.09"	@ Tag_conformance
	.eabi_attribute	6, 10	@ Tag_CPU_arch
	.eabi_attribute	7, 65	@ Tag_CPU_arch_profile
	.eabi_attribute	8, 1	@ Tag_ARM_ISA_use
	.eabi_attribute	9, 2	@ Tag_THUMB_ISA_use
	.fpu	neon
	.eabi_attribute	34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute	15, 1	@ Tag_ABI_PCS_RW_data
	.eabi_attribute	16, 1	@ Tag_ABI_PCS_RO_data
	.eabi_attribute	17, 2	@ Tag_ABI_PCS_GOT_use
	.eabi_attribute	20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute	21, 0	@ Tag_ABI_FP_exceptions
	.eabi_attribute	23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute	24, 1	@ Tag_ABI_align_needed
	.eabi_attribute	25, 1	@ Tag_ABI_align_preserved
	.eabi_attribute	38, 1	@ Tag_ABI_FP_16bit_format
	.eabi_attribute	18, 4	@ Tag_ABI_PCS_wchar_t
	.eabi_attribute	26, 2	@ Tag_ABI_enum_size
	.eabi_attribute	14, 0	@ Tag_ABI_PCS_R9_use
	.file	"aka.c"
	.globl	main                            @ -- Begin function main
	.p2align	2
	.type	main,%function
	.code	32                              @ @main
main:
	.fnstart
@ %bb.0:
	.save	{r11, lr}
	push	{r11, lr}
	.setfp	r11, sp
	mov	r11, sp
	.pad	#104
	sub	sp, sp, #104
	ldr	r0, .LCPI0_8
.LPC0_8:
	add	r0, pc, r0
	bl	printf
	ldr	r0, .LCPI0_7
.LPC0_7:
	add	r0, pc, r0
	add	r1, sp, #6
	bl	scanf
	movw	r0, #1
	bl	sleep
	add	r1, sp, #6
	ldr	r0, .LCPI0_6
.LPC0_6:
	add	r0, pc, r0
	bl	printf
	ldr	r0, .LCPI0_5
.LPC0_5:
	add	r0, pc, r0
	sub	r1, r11, #4
	bl	scanf
	ldr	r0, .LCPI0_4
.LPC0_4:
	add	r0, pc, r0
	bl	printf
	ldr	r0, .LCPI0_3
.LPC0_3:
	add	r0, pc, r0
	bl	printf
	movw	r0, #2
	bl	sleep
	ldr	r0, .LCPI0_2
.LPC0_2:
	add	r0, pc, r0
	bl	printf
	movw	r0, #2
	bl	sleep
	ldr	r0, .LCPI0_1
.LPC0_1:
	add	r0, pc, r0
	bl	printf
	movw	r0, #2
	bl	sleep
	ldr	r0, .LCPI0_0
.LPC0_0:
	add	r0, pc, r0
	bl	printf
	movw	r0, #0
	mov	sp, r11
	pop	{r11, pc}
	.p2align	2
@ %bb.1:
.LCPI0_0:
	.long	.L.str.8-(.LPC0_0+8)
.LCPI0_1:
	.long	.L.str.7-(.LPC0_1+8)
.LCPI0_2:
	.long	.L.str.6-(.LPC0_2+8)
.LCPI0_3:
	.long	.L.str.5-(.LPC0_3+8)
.LCPI0_4:
	.long	.L.str.4-(.LPC0_4+8)
.LCPI0_5:
	.long	.L.str.3-(.LPC0_5+8)
.LCPI0_6:
	.long	.L.str.2-(.LPC0_6+8)
.LCPI0_7:
	.long	.L.str.1-(.LPC0_7+8)
.LCPI0_8:
	.long	.L.str-(.LPC0_8+8)
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cantunwind
	.fnend
                                        @ -- End function
	.type	.L.str,%object                  @ @.str
	.section	.rodata.str1.1,"aMS",%progbits,1
.L.str:
	.asciz	"input your name "
	.size	.L.str, 17

	.type	.L.str.1,%object                @ @.str.1
.L.str.1:
	.asciz	"%s"
	.size	.L.str.1, 3

	.type	.L.str.2,%object                @ @.str.2
.L.str.2:
	.asciz	"hi %s just input a number \360\237\244\244: "
	.size	.L.str.2, 33

	.type	.L.str.3,%object                @ @.str.3
.L.str.3:
	.asciz	"%d"
	.size	.L.str.3, 3

	.type	.L.str.4,%object                @ @.str.4
.L.str.4:
	.asciz	"\n"
	.size	.L.str.4, 2

	.type	.L.str.5,%object                @ @.str.5
.L.str.5:
	.asciz	" Are "
	.size	.L.str.5, 6

	.type	.L.str.6,%object                @ @.str.6
.L.str.6:
	.asciz	" You"
	.size	.L.str.6, 5

	.type	.L.str.7,%object                @ @.str.7
.L.str.7:
	.asciz	" Ready"
	.size	.L.str.7, 7

	.type	.L.str.8,%object                @ @.str.8
.L.str.8:
	.asciz	" To"
	.size	.L.str.8, 4

	.ident	"clang version 15.0.1"
	.section	".note.GNU-stack","",%progbits
