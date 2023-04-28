		section .data
message:	db 'Hello, Holberton', 10

format:		db '%s', 10, 0

		section .text
		global main
		extern printf

main:
		push message
		push format
		call printf
		add esp, 8
		mov eax, 0
		ret
