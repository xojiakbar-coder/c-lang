app: index.c
	gcc index.c -o index

run: index
	./index

clean:
	rm -f index
