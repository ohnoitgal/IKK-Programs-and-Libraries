[BITS 32]

section .asm

global print:function
global ikatzkernel_getkey:function
global ikatzkernel_putchar:function
global ikatzkernel_malloc:function
global ikatzkernel_free:function
global ikatzkernel_process_load_start:function
global ikatzkernel_process_get_arguments:function
global ikatzkernel_system:function
global ikatzkernel_exit:function

; void print(const char* filename)
print:
    push ebp
    mov ebp, esp
    push dword[ebp + 8]
    mov eax, 1 ; Command print
    int 0x80
    add esp, 4
    pop ebp
    ret

; int ikatzkernel_getkey()
ikatzkernel_getkey:
    push ebp
    mov ebp, esp
    mov eax, 2 ; Command getkey
    int 0x80
    pop ebp
    ret
    
; void putchar(char c)
ikatzkernel_putchar:
    push ebp
    mov ebp, esp
    mov eax, 3 ; Command putchar
    push dword [ebp + 8] ; Variable "c"
    int 0x80
    add esp, 4
    pop ebp
    ret

; void* ikatzkernel_malloc(size_t size)
ikatzkernel_malloc:
    push ebp
    mov ebp, esp
    mov eax, 4 ; Command malloc (allocates memory for the process)
    push dword[ebp + 8] ; Variable "size"
    int 0x80
    add esp, 4
    pop ebp
    ret

; void ikatzkernel_free(void* ptr)
ikatzkernel_free:
    push ebp
    mov ebp, esp
    mov eax, 5 ; Command 5 free (frees the allocated memory for this process)
    push dword[ebp + 8] ; Variable "ptr"
    int 0x80
    add esp, 4
    pop ebp
    ret

; void ikatzkernel_process_load_start(const char* filename)
ikatzkernel_process_load_start:
    push ebp
    mov ebp, esp
    mov eax, 6 ; Command 6 process load start (starts a process)
    push dword[ebp + 8] ; Variable "filename"
    int 0x80
    add esp, 4
    pop ebp
    ret

; int ikatzkernel_system(struct command_argument* arguments)
ikatzkernel_system:
    push ebp
    mov ebp, esp
    mov eax, 7 ; Command 7 process_system (runs a system command based on the arguments)
    push dword[ebp + 8] ; Variable "arguments"
    int 0x80
    add esp, 4
    pop ebp
    ret

; void ikatzkernel_process_get_arguments(struct process_arguments* arguments)
ikatzkernel_process_get_arguments:
    push ebp
    mov ebp, esp
    mov eax, 8 ; Command 8 Gets the process arguments
    push dword[ebp + 8] ; Variable arguments
    int 0x80
    add esp, 4
    pop ebp
    ret

; void ikatzkernel_exit()
ikatzkernel_exit:
    push ebp
    mov ebp, esp
    mov eax, 9 ; Command 9 process exit
    int 0x80
    pop ebp
    ret
