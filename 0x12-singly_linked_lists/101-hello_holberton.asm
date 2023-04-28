	section .data
	message db 'Hello, Holberton', 10

	section .text
	global main
	extern printf

main:
	push message
	push format
	call printf
	add rsp, 16
	xor eax, eax
	ret

	section .data
	format db '%s', 0
