all: original refactored verbose

original:
	- gcc -o bin/task_code src/task_code.c

refactored:
	- gcc -o bin/refactored_task_code src/refactored_task_code.c

verbose:
	- gcc -o bin/verbose_refactored_task_code src/verbose_refactored_task_code.c
