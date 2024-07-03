		global main
		extern printf

str: 	db 		"Hello, World", 10, 0

main: 	mov 	rdi, str
		xor 	rax, rax
		call 	printf
		mov 	rax, 0
		ret
