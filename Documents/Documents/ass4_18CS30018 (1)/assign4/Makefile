test_output.txt: a.out ass4_18CS30018_test.c
	./a.out < ass4_18CS30018_test.c > test_output.txt
	
lex.yy.c: ass4_18CS30018.l
	flex ass4_18CS30018.l

y.tab.c: ass4_18CS30018.y
	yacc -dtv ass4_18CS30018.y

a.out: lex.yy.c y.tab.c ass4_18CS30018_main.o
	gcc lex.yy.c y.tab.c ass4_18CS30018_main.o -lfl

ass4_18CS30018_main.o: ass4_18CS30018_main.c
	gcc -c ass4_18CS30018_main.c

clean:
	rm y.tab.c y.tab.h a.out lex.yy.c y.output ass4_18CS30018_main.o test_output.txt
