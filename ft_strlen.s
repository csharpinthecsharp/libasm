global ft_strlen

ft_strlen:
	mov rax, 0

.loop_start:
	cmp byte [rdi], 0
	je .loop_end

	inc rax
	inc rdi
	jmp .loop_start

.loop_end:
	ret
