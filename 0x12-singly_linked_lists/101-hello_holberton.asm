extern printf

section .data
    hello db 'Hello, Holberton',10,0

section .text
    global main

main:
    ; printf("Hello, Holberton\n")
    mov rdi, hello
    mov eax, 0
    call printf
    ; exit(0)
    mov eax, 85
    xor edi, edi
    syscall
