global ft_read
extern __errno_location


ft_read:
	mov rax, 0
	mov rdi, rdi
	mov rsi, rsi
	mov rdx, rdx
	 syscall

	cmp rax, 0
	js _error

	ret

_error:
	neg rax
	mov r8, rax
	
	call __errno_location WRT ..plt

	mov [rax], r8
	mov rax, -1
	ret
