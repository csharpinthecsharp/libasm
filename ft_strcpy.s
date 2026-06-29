global ft_strcpy

ft_strcpy:              ; rdi = arg1 (dest) | rsi = arg2 (src)
   mov rax, rdi         ; tell rax (our return for later) to point on rdi

.loop_start:
    mov al, [rsi]       ; move a byte of rsi (src) into a temp low 8 bit
    mov [rdi], al       ; move temp low 8 bit into rdi (dest)

    cmp al,  0          ; compare temp low 8 bit to '\0'
    je .loop_end        ; escape the loop

    inc rsi             
    inc rdi
    jmp .loop_start     ; go on next loop

.loop_end:
    ret                 ; return rax that point to dest
