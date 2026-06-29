extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

section .text
global ft_strdup

ft_strdup:
	push rdi
	
	call ft_strlen WRT ..plt
	mov rdi, rax	; moving strlen result in rdi
 	
	inc rdi		; + '\0'

	call malloc WRT ..plt
	
	cmp rax, 0
	je _error

	pop rsi		; take rdi value for src	
	mov rdi, rax	; move dst into rdi (strcpy 1st arg)	
	
	push rdi
	call ft_strcpy WRT ..plt
	pop rax ; push and pop rdi/rax to keep rax holding the dest pointer
		; otherwise strcpy while override rdi
	ret

_error:
	neg rax
	mov r8, rax

	call __errno_location WRT ..plt	

	mov [rax], r8
	mov rax, 0 ; NULL
	ret	
