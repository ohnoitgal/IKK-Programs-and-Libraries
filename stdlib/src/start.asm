[BITS 32]

global _start
extern c_start
extern ikatzkernel_exit

section .asm

_start:
    call c_start
    call ikatzkernel_exit
    ret
