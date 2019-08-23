#   loader.s will set the stack pointer because the boot loader
#   (grub in this case) does not set it.
#   And then it will call kernelMain function which is in kernel.cpp file.
 

%define MAGIC		0x1badb002		; magic number (grub)
%define FLAGS		(1<<0 | 1<<1)
%define CHECKSUM	-(MAGIC + FLAGS)

section .multiboot
	align	4
	dd	MAGIC
	dd	FLAGS
	dd	CHECKSUM

section .text
	extern kernelMain
	global loader

loader:
	mov	esp, $kernel_stack
	push	eax
	push	ebx
	call kernelMain

_stop:
	cli
	hlt
	jmp _stop

section .bss
space resb 2*1024*1024; #2Mb
kernel_stack:
