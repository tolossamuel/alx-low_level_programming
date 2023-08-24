section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments and call printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax  ; Clear RAX register for proper printf call
    call printf

    ; Exit the program
    xor rdi, rdi  ; Return code 0
    mov rax, 60   ; syscall: exit
    syscall
