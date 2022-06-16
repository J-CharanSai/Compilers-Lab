
a.out: lex.yy.o
		gcc lex.yy.o -lfl
		
lex.yy.o: lex.yy.c
		gcc -c lex.yy.c -lfl
		
lex.yy.c: ass3_18CS10024.l ass3_18CS10024.c
	flex ass3_18CS10024.l ass3_18CS10024.c

clean:
	rm  a.out lex.yy.c lex.yy.o 
	
run: a.out ass3_18CS10024_test.c
	./a.out < ass3_18CS10024_test.c
	

