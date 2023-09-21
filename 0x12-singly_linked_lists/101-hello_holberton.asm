section .data
    hello db "Hello, Holberton",10  ; Message to be printed, followed by a newline character
    format db "%s",0              ; Format string for printf, null-terminated

section .text
    global main
    extern printf

main:
    push rbp               ; Save the base pointer
    mov rdi, format       ; Load the format string into rdi
    mov rsi, hello        ; Load the address of the message into rsi
    call printf           ; Call printf
    pop rbp                ; Restore the base pointer

    ; Exit the program
    mov rax, 60            ; syscall number for exit
    xor rdi, rdi           ; Status code 0
    syscall

