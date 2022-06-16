a.out: main.o libass2.a
	gcc -Wall main.o -L. -lass2 

main.o:	main.cpp myl.h
	gcc -Wall -c main.cpp

libass2.a:	ass2_19CS10035.o
		ar -rcs libass2.a ass2_19CS10035.o

assn2_16CS10053.o:	ass2_19CS10035.cpp myl.h
	gcc -Wall -c ass2_19CS10035.cpp
	
clean:
	rm a.out main.o libass2.a ass2_19CS10035.o