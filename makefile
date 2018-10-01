all: bastringa.o bastr.o bastringa2electricBoogaloo.o
	gcc bastringa.o bastringa2electricBoogaloo.o bastr.o -o bastringa
bastringa.o: bastringa.c 
	gcc -c bastringa.c
bastr.o: bastr.c 
	gcc -c bastr.c
bastringa2electricBoogaloo.o: bastringa2electricBoogaloo.c
	gcc -c bastringa2electricBoogaloo.c
go:all
	bastringa
