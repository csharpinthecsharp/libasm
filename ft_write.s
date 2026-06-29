global ft_write
extern __errno_location
ft_write:
					; rdi, rsi, rdx (1, 2, 3) [args]
	mov rax, 1			; write
	mov rdi, rdi			; stdout 
	mov rsi, rsi			; msg
	mov rdx, rdx			; len
	 syscall			; THE RDI, RSI, RDX mov are useless here,
					; i just set them up for visual remembering
					; /!\ Since we use write they are already set in,
					; the right place

	cmp rax, 0			; check v
	js _set_error			; j jump s if sign (-)

	ret

_set_error:
	neg rax				; error is in negativ (neg will put it back in positive)
	mov r8, rax			; set FD error in temp holder, i use r8 rbx but i could use any
					; LOW 32 BITS reg that in non calle-save.

	call __errno_location WRT ..plt	; "With Respect To Procedure Linkage Table"

	mov [rax], r8			; set errno value in memory rax []
					; normal explanation: let ernno take the error code

	mov rax, -1			; overwrite with -1 to return
	ret	
