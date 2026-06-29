global ft_strcpy

ft_strcpy:              ; rdi = arg1 (dest) | rsi = arg2 (src)
   mov rcx, 0
   mov rdx, 0
   cmp rsi, 0
   je .loop_end

.loop_start:
    mov al, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], al

    cmp al,  0          ; compare temp low 8 bit to '\0'
    je .loop_end        ; escape the loop

    inc rcx
    jmp .loop_start     ; go on next loop

.loop_end:
    mov rax, rdi
    ret                 ; return rax that point to dest
