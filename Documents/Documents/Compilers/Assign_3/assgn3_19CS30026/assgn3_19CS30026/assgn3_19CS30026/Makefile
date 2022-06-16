output.txt: a.out ass3_19CS30026_test.c
	./a.out < ass3_19CS30026_test.c > output.txt

a.out: lex.yy.c ass3_19CS30026.o 
	gcc -Wall ass3_19CS30026.o -lfl

lex.yy.c: ass3_19CS30026.l
	flex ass3_19CS30026.l

assg3_16CS10053.o: ass3_19CS30026.c
	gcc -c -Wall ass3_19CS30026.c 

clean:
	rm output.txt lex.yy.c a.out *.o
