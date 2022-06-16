/*NOTE : This test program is just meant to test the parser, may not be semantically correct*/
//# is not included in grammar, so it is discarded from flex specs
//#include "stdio.h"

extern void swap();
const int x = 25;

static inline void swap(int *xp, int *yp,...) 
{ 
    int temp = *xp;
    *xp = *yp; 
    *yp = temp; 
} 

int main()
{  
   volatile float a = 10.92e-32;//single-line comment
   restrict long b = 56;
   short i = 0;
   char ch='a';
   double c = 89.0989;
   char c[10]='cconst';//This is just meant to test the character constant
   //'struct' keyword is not included in grammar rules so it is discarded from flex specs
   //struct st1;
   st1.roll_num=18;
   st1.name="Hello";
   //struct* ptr;//didn't allocate memory as this is a test program
   ptr->roll_num = st1.roll_no;  
   for (i=0;i<10;i++)
   {
      if(i!=5 || i>=8)
      {
         printf("\nThis is a string literal,%d",sizeof(i));/*A multi-line comment*/
      }
      else if(i==5 && i>=8)
      {
         goto jump_here;
         break;
      }
      
      else
      {
         continue;
      }   
   }
  
  //label for goto
  jump_here: a = a+1;
  	    a = '5', b = '9'; 
	    printf("a&b = %d, a|b = %d, a^b = %d, ~a = %d, b<<1 = %d, b>>1 = %d\n, !a=%d\n", a & b, a | b, a ^ b,a = ~a, b << 1, b >> 1); 
	   //switch block
	   switch(a)
	   {
		    case 'a': printf("done\n");break;
		    case 'b': printf("error!\n");break;
		    default: break;
	   }
	   
	   //conditional-expression
	   b =(i>0)?((b/2)*10):10;
	   
	   //to test block levels and arithmetic-assign operators
	   {
		   b %= 10;
		   i += 2;
		   i -= 2;
		   i *= 1;
		   i /= 1;
	   }
	   //while loop
           while(!(i>=2 || i<=5))
		   {
		      i++;
		   }
           //to test bit-assign operators
	   {
		   b >>= 1;
		   b <<= 1;
		   b ^= 5;
		   b &= 4;
		   b |= 6;
	   }
	   
	   //do-while loop
	   do 
	   {
	      for(i = 0;i< 50;i++)
		      i = i/10;
	   }while (i>=2 && i<=5);
	   
	   //swap call
	   swap(&a,&b);
	   return 0;	  
}
	
	
