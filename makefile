all: bastringa.o bastrlib.o bastrlib.h bastringadefault.o
	gcc bastringa.o bastrlib.o -o bastringa
	gcc bastringadefault.o -o bastringadefault
bastringa.o: bastringa.c bastrlib.h
	gcc -c bastringa.c
bastrlib.o: bastrlib.c bastrlib.h 
	gcc -c bastrlib.c
bastringadefault.o: bastringadefault.c
	gcc -c bastringadefault.c
go:all
	./bastringa
	./bastringadefault
clean:
	rm *.o bastringa *~* *.exe *.out
