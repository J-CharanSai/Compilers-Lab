tinyC_compiler: y.tab.o lex.yy.o ass6_19CS10035_19CS30026_translator.o ass6_19CS10035_19CS30026_target_translator.o 
	@g++ -g ass6_19CS10035_19CS30026_translator.o ass6_19CS10035_19CS30026_target_translator.o lex.yy.o y.tab.o -lfl -o tinyC_compiler
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test1.c
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test2.c 
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test3.c
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test4.c
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test5.c
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test6.c
	@echo " run command 'make run' to run the test files"

lex.yy.c: ass6_19CS10035_19CS30026.l
	@flex ass6_19CS10035_19CS30026.l
y.tab.c: ass6_19CS10035_19CS30026.y
	@bison -dty ass6_19CS10035_19CS30026.y
ass6_19CS10035_19CS30026_target_translator.o: ass6_19CS10035_19CS30026_target_translator.cxx
	@g++ -g -c ass6_19CS10035_19CS30026_target_translator.cxx
ass6_19CS10035_19CS30026_translator.o: ass6_19CS10035_19CS30026_translator.cxx
	@g++ -g -c ass6_19CS10035_19CS30026_translator.cxx
lex.yy.o: lex.yy.c
	@g++ -g -c lex.yy.c
y.tab.o:    y.tab.c
	@g++ -g -DYYDEBUG -c y.tab.c
libass6_19CS10035_19CS30026.a: ass6_19CS10035_19CS30026.o
	@ar -rcs libass6_19CS10035_19CS30026.a ass6_19CS10035_19CS30026.o

ass6_19CS10035_19CS30026.o: ass6_19CS10035_19CS30026.c myl.h
	@gcc -Wall  -c ass6_19CS10035_19CS30026.c
clean:
	@rm test1 test2 test3 test4 test5 test6 lex.yy.c y.tab.h y.tab.c lex.yy.o y.tab.o ass6_19CS10035_19CS30026_translator.o ass6_19CS10035_19CS30026_target_translator.o ass6_19CS10035_19CS30026_test1.o ass6_19CS10035_19CS30026_test2.o ass6_19CS10035_19CS30026_test3.o ass6_19CS10035_19CS30026_test4.o ass6_19CS10035_19CS30026_test5.o ass6_19CS10035_19CS30026_test6.o libass6_19CS10035_19CS30026.a ass6_19CS10035_19CS30026.o tinyC_compiler


test1: ass6_19CS10035_19CS30026_test1.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie ass6_19CS10035_19CS30026_test1.o -o test1 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test1.o: ass6_19CS10035_19CS30026_test1.s myl.h
	@gcc -g -Wall  -c ass6_19CS10035_19CS30026_test1.s -o ass6_19CS10035_19CS30026_test1.o

test2: ass6_19CS10035_19CS30026_test2.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie  ass6_19CS10035_19CS30026_test2.o -o test2 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test2.o: ass6_19CS10035_19CS30026_test2.s myl.h
	@gcc -g -Wall -c ass6_19CS10035_19CS30026_test2.s

test3: ass6_19CS10035_19CS30026_test3.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie  ass6_19CS10035_19CS30026_test3.o -o test3 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test3.o: ass6_19CS10035_19CS30026_test3.s myl.h
	@gcc -g -Wall  -c ass6_19CS10035_19CS30026_test3.s

test4: ass6_19CS10035_19CS30026_test4.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie  ass6_19CS10035_19CS30026_test4.o -o test4 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test4.o: ass6_19CS10035_19CS30026_test4.s myl.h
	@gcc -g -Wall  -c ass6_19CS10035_19CS30026_test4.s

test5: ass6_19CS10035_19CS30026_test5.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie  ass6_19CS10035_19CS30026_test5.o -o test5 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test5.o: ass6_19CS10035_19CS30026_test5.s myl.h
	@gcc -g -Wall -c ass6_19CS10035_19CS30026_test5.s

test6: ass6_19CS10035_19CS30026_test6.o libass6_19CS10035_19CS30026.a
	@gcc -g -no-pie  ass6_19CS10035_19CS30026_test6.o -o test6 -L. -lass6_19CS10035_19CS30026
ass6_19CS10035_19CS30026_test6.o: ass6_19CS10035_19CS30026_test6.s myl.h
	@gcc -g -Wall -c ass6_19CS10035_19CS30026_test6.s


output: output.o libass6_19CS10035_19CS30026.a
	@gcc -g  output.o -o output -L. -lass6_19CS10035_19CS30026
output.o: output.s myl.h
	@gcc -g -Wall -c output.s

run: 
		
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test1.c > ass6_19CS10035_19CS30026_quad1.out
	
	@mv output.s ass6_19CS10035_19CS30026_test1.s
	
	@make -s test1
	
	@./tinyC_compiler < ass6_19CS10035_19CS30026_test2.c > ass6_19CS10035_19CS30026_quad2.out

	@mv output.s ass6_19CS10035_19CS30026_test2.s
	
	@make -s test2

	@./tinyC_compiler < ass6_19CS10035_19CS30026_test3.c > ass6_19CS10035_19CS30026_quad3.out

	@mv output.s ass6_19CS10035_19CS30026_test3.s

	@make -s test3

	@./tinyC_compiler < ass6_19CS10035_19CS30026_test4.c > ass6_19CS10035_19CS30026_quad4.out
	
	@mv output.s ass6_19CS10035_19CS30026_test4.s

	@make -s test4

	@./tinyC_compiler < ass6_19CS10035_19CS30026_test5.c > ass6_19CS10035_19CS30026_quad5.out
	
	@mv output.s ass6_19CS10035_19CS30026_test5.s

	@make -s test5

	@./tinyC_compiler < ass6_19CS10035_19CS30026_test6.c > ass6_19CS10035_19CS30026_quad6.out
	
	@mv output.s ass6_19CS10035_19CS30026_test6.s

	@make -s test6


	@echo ""
	@echo "COMMANDS FOR THE TEST CASES"
	@echo "1 --> palandrome check                     --> ./test1"
	@echo "2 --> Sum of digits                        --> ./test2"
	@echo "3 --> GCD calculation                      --> ./test3"
	@echo "4 --> nth Fibonacci Number                 --> ./test4"
	@echo "5 --> calculate intreset                   --> ./test5"
	@echo "6 --> Merge Sort                           --> ./test6"
