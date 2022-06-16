/***
			COMPILERS LABORATORY
		 Assignment 3
		 Group Members:
		 Sawale Saurabh Suresh 19CS10054
		 Sushant Kumar         19CS10062
		 Testing file

***/

#include <stdio.h>

#define Sin "\t done \n"


typedef struct node {
	struct node* next;
	int data=0;
};

inline void func(char[] text){
	char[20] sum=text + Sin;
	printf("Just random checking : %s \n", sum);
    return;
}


void main(){

	//testing all the keywords here
	auto, break, case, char, const, continue, default, do, double, else
	enum, extern, float, for, goto, if, inline, int, long, register
	restrict, return, short, signed, sizeof, static, struct, switch, typedef, union
 	unsigned, void, volatile, while, _Bool, _Complex, _Imaginary;

 	

 	// testing identifiers and constants:
 	int n = 358;
 	int n1 = -3;
 	float f = 37.89;
 	float f1 = -58.8;
 	char str[100];
 	str = "Hello Everyone we are Saurabh and Sushant!\n \t \'";
 	char ch='s';




 	//testing the punctuators and keywords together :
 	node* root=NULL;
 	funct(text);
 	extern unsigned int i=0;
 	static short h=0;
 	volatile signed long p = 9;
 	double d=0.78;
 	enum days{"SUN","MON","TUE","WED","THUR","FRI","SAT"};
 	for(i=0;i<50;i++) {
 		switch(i) {
 			case 1 : continue;
 			case 2: break;
 			default : return -1;
 		}
 	}
	do{	
		if (n==f){
	 		i++;
	 		i--;
	 		i=i*i;
	 		i=i-5;
	 		if (i&&0||!i) i=~i;
	 	}
	 	else if(f>=n) {
	 		root=root->next;
	 		root->data=i/10;
	 		i=i%2;
	 		root->data = {[(i>>5)<<8]+9}-100;
	 		if(text!="HI !") text="HI\a\b\v";
	 		i=8^5;
	 		i=i|root->data;
	 	}

	 	else if(f>=n) {
	 		root->data = (i*=11 > 5||i/=10 < 5) ? i:0;
	 		i%=20;
	 		i+=5;
	 		i-=7;
	 		i<<=5;
	 		i>>=2;
	 		i&=21;
	 		i^=12;
	 	}

	 	else {
	 		auto int j=0,k=0;
	 		j|=54;
	 		#define R 77
	 		k*=R;
	 		break;
	 	}
	}
 	while (1) ;
 	i=sizeof(char);
 	_Bool	Bool;
 	_Complex  Complex;
 	_Imaginary	Imaginary;
 	return 0;
}
