#include<iostream>
using namespace std;

#include "toylib.h"

int main()
{
	//The function to convert all letters to uppercase,reading through syscall
	char b[101];
	scanf("%[^\n]",b);
	cout << " length of string: " << printStringUpper(b) << endl;

	//The function to read hexinteger and print its decimal equivalent
	int n;
	if(readHexInteger(&n)==1)
		cout << n << endl;
	else
		cout << "The input is BAD" << endl;

	//converting given decimal to hexinteger and printing it
	int n1;
	cin >> n1;

	cout << "The number of printed characters: " << printHexInteger(n1) << endl;

	//read floating point number through syscall and printing it
	float f;

	if(readFloat(&f)==1)
		printf("%f\n",f);
	else
		cout << "The input entered is bad"<<"\n";

	//function for printing floating point number~
	float f1;

	cin >> f1;
	
	cout << "The number of printed characters: " << printFloat(f1) << endl;
	
	return 0;
}