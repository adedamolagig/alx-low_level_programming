section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Calling printf with the address of the hello string as an argument
    ; and the format specifier as the second argument
    mov rdi, format
    mov rsi, hello
    xor rax, rax        ; Clear RAX to indicate there are no floating-point arguments
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor edi, edi        ; exit status 0
    syscall

