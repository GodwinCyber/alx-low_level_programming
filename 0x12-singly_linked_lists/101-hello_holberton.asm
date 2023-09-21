section .data
    hello db "Hello, Holberton",10 ; Message to be printed, followed by a newline character

section .text
    global main
    extern printf

main:
    sub rsp, 8             ; Align the stack
    mov rdi, hello         ; Load the format string
    call printf            ; Call the printf function
    add rsp, 8             ; Restore the stack

    ; Exit the program
    mov rax, 60            ; syscall number for exit
    xor rdi, rdi           ; Status code 0
    syscall

