all: original refactored verbose secure

original:
	- gcc -o bin/task_code src/task_code.c

refactored:
	- gcc -o bin/refactored_task_code src/refactored_task_code.c

verbose:
	- gcc -o bin/verbose_refactored_task_code src/verbose_refactored_task_code.c

secure:
	- gcc -o bin/secure_strlen src/secure_strlen.c

vuln:
	gcc -o bin/vulnerable src/vulnerable_code.c
