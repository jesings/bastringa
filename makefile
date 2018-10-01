all: bastringa.o bastrlib.o bastrlib.h
	gcc bastringa.o bastrlib.o -o bastringa
bastringa.o: bastringa.c bastrlib.h
	gcc -c bastringa.c
bastrlib.o: bastrlib.c bastrlib.h 
	gcc -c bastrlib.c
bastringadefault.o: bastringadefault.c
	gcc -c bastringadefault.c
go:all
	./bastringa
clean:
	rm *.o bastringa *~* *.exe *.out
