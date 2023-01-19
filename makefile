all:
	gcc date.c -o date
	gcc ls.c -o ls
	gcc m.c
	./a.out
clean:
	rm m.o
	rm date.o
	rml s.o