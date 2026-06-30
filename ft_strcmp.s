global ft_strcmp

; rdi 1 rsi 2

ft_strcmp:
	cmp rdi, 0
	je _early_exit

.loop_start:
	mov al, [rdi]
   	mov bl, [rsi]

    	cmp al, bl
    	jne .loop_end

    	cmp al, 0
    	je .loop_end

    	inc rdi
    	inc rsi
    	jmp .loop_start

.loop_end:
    	movsx rax, al   ;sx to keep the - sign
    	movsx rbx, bl
    	sub rax, rbx    
    	ret

_early_exit:
	mov rax, 0
	ret
