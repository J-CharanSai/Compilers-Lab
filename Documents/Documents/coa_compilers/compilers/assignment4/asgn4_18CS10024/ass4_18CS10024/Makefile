a.out: y.tab.o lex.yy.o ass4_18CS10024.o 
	gcc ass4_18CS10024.o lex.yy.o y.tab.o -lfl
	./a.out < test.c
lex.yy.c: ass4_18CS10024.l y.tab.h
	flex ass4_18CS10024.l
y.tab.c: ass4_18CS10024.y
	bison -dty ass4_18CS10024.y
ass4_18CS10024.o: ass4_18CS10024.c y.tab.h
	gcc -c ass4_18CS10024.c
y.tab.h: ass4_18CS10024.y
	bison -dty ass4_18CS10024.y
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c
y.tab.o:    y.tab.c y.tab.h
	gcc -c y.tab.c
clean:
	rm a.out lex.yy.o ass4_18CS10024.o lex.yy.c y.tab.c y.tab.h y.tab.o
run:
	./a.out < test.c