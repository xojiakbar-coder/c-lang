some: pen.c
	echo "This will always run, and runs second"
	touch pen.c

other_target:
	echo "This runs first"

pen:
	echo "#include <stdio.h>\nint main(void) { \nprint('Hello World!');\nreturn 0;\n}" > pen.c

run: pen.c
	gcc pen.c -o pen

runs: 
	./pen