/*

	Name	:	Jatoth Charan Sai
	Roll No.:	19CS10035
	Assignment - 2

*/


#include "myl.h"

int main(){
	int n;
	float f;
	int x;
	x = printStr("This is Assignment - 2 :)\n\n");
	while(1){
		x = printStr("Enter the integer : ");
		x = readInt(&n);
		if(x == ERR){
			printStr("Invalid Input");
			printStr("\n");
		}
		else{
			x = printStr("Entered interger is: ");
			x = printInt(n);
			printStr("\n");
		}
		x = printStr("Enter the float : ");
		x = readFlt(&f);
		if(x == ERR){
			printStr("Invalid Input");
			printStr("\n");
		}
		else{
			x = printStr("Entered float is: ");
			x = printFlt(f);
			printStr("\n");
		}

		printStr("\n\t----------\n\n");
	}

	return 0;
}