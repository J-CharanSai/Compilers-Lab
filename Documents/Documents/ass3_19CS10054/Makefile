all: a.out ass3_19CS10054_test.c
	./a.out < ass3_19CS10054_test.c

a.out: lex.yy.c
	gcc lex.yy.c -ll

lex.yy.c: ass3_19CS10054.l ass3_19CS10054.c
	flex ass3_19CS10054.l ass3_19CS10054.c

clean:
	rm a.out lex.yy.c