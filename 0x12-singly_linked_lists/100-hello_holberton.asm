section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    mov eax, 0
    call printf

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall

