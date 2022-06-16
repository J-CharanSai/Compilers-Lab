a.out: y.tab.o lex.yy.o asgn4_19CS10035.o 
	gcc asgn4_19CS10035.o lex.yy.o y.tab.o -lfl
	./a.out < asgn4_19CS10035_test.c
lex.yy.c: asgn4_19CS10035.l y.tab.h
	flex asgn4_19CS10035.l
y.tab.c: asgn4_19CS10035.y
	bison -dty asgn4_19CS10035.y
asgn4_19CS10035.o: asgn4_19CS10035.c y.tab.h
	gcc -c asgn4_19CS10035.c
y.tab.h: asgn4_19CS10035.y
	bison -dty asgn4_19CS10035.y
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c y.tab.h
	gcc -c y.tab.c
clean:
	rm a.out lex.yy.o asgn4_19CS10035.o lex.yy.c y.tab.c y.tab.h y.tab.o
run:
	./a.out < asgn4_19CS10035_test.c