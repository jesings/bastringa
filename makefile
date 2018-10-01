all: bastringa.o bastrlib.o bastrlib.h
	gcc bastringa.o bastrlib.o -o bastringa
bastringa.o: bastringa.c bastrlib.h
	gcc -c bastringa.c
bastrlib.o: bastrlib.c bastrlib.h 
	gcc -c bastrlib.c
go:all
	./bastringa
clean:
	rm *~*
	rm *.o
	rm bastringa
	rm *.exe
	rm *.out
