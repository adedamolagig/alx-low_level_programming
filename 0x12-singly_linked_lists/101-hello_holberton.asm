section .data
    hello_fmt db "Hello, Holberton",0   ; Null-terminated format string
    newline db 10                      ; ASCII code for newline character (0xA)

section .text
    global main

main:
    ; Call printf with the format string
    mov rdi, hello_fmt
    call printf

    ; Print a newline character
    mov rdi, newline
    call putchar

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status (0)
    syscall

section .bss
    hello_fmt resb 256  ; Reserve space for format string (256 bytes)

section .extern
    extern printf, putchar

