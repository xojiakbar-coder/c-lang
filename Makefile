blah: 
	cc blah.c -o blah

some_file: other_file
	echo "Runs second" 
	touch some_file

other_file:
	echo "Runs first"

clean:
	rm -f some_file