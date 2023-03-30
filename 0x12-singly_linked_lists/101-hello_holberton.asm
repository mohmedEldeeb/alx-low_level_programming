section .data
    hello db 'Hello, Holberton',0
    newline db 10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Pass the address of the hello string to printf
    lea rdi, [hello]
    mov rax, 0
    call printf

    ; Pass the address of the newline string to printf
    lea rdi, [newline]
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret

