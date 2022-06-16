/*

	Name	:	Jatoth Charan Sai
	Roll No.:	19CS10035
	Assignment - 2

*/

// include the libraries
#include "myl.h"

// define the variables
#define STDIN_FILENO 0
#define MAX 33
#define PD 8

//Function to print string to standard output
int printStr(char *str)
{
    int bytes=0;
    while(str[bytes]!='\0')bytes++;  // find the len of the string 
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(bytes)
    );
    return bytes; // return the length
}

//Function to read an integer from standard input
int readInt(int* x){
  	int i = 0;
    char c='a';
    int sign = 1;
    int val = 0;
    int ee = 1;
    bool ee1 = 0;
    bool neg = 0;
    while(1)
    {
        __asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
        if(c ==' ' || c == '\t' || c =='\n')
          break;
        else if(i==0 && c =='-') 
          sign=-1;
        else
        {
            if(c >'9' || c <'0')
            {
            	if(c == '.'){
            		break;
            	}
            	if(c != 'e')
					return ERR;
	        	else if(c=='e')
	            {
	            	ee1 = 1;
	            	int ax = 0;
	            	__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	if(c == '+')
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	else if(c == '-')
	            	{
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            		neg = 1;
	            	}
	            	while(c !=' ' && c != '\t' && c !='\n')
	            	{
	            		ax *= 10;
	            		ax += (int)(c-'0');
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	}
	            	while(ax--){
	            			ee *= 10;
	            	}
	            	break;
	            }
	        }
            else
            {
                val *= 10;
                val += (int)(c - '0');
            }
        }

        i += 1;
    }

    *x = (val * sign); 
    if(ee1)
    {
    	if(neg)
    		*x /= ee;
    	else
    		*x *= ee;
    }
    return OK;   // success 
  
}
// Function to print the integer 
int printInt(int n){
	char buff[MAX],zero = '0';
	int i= 0,j,k,bytes;
	if(n==0)buff[i++] = zero;
	else
	{
		if(n<0)
		{
			buff[i++] = '-';
			n = -n;
		}
		while(n)
		{
			int d = n%10;
			buff[i++] = (char)(zero+d);
			n /= 10;
		}
		if(buff[0] == '-') j = 1;
		else j = 0;
		k = i - 1;
		while(j<k){
			char t = buff[j];
			buff[j++] = buff[k];
			buff[k--] = t;
		}
	}
	bytes = i;
	int r;
  
  __asm__ __volatile__(
    "movq $1, %%rax \n\t"
    "movq $1, %%rdi \n\t"
    "syscall \n\t"
    : "=a"(r)
    : "S"(buff), "d"(bytes)
  );

  if(r < 0){
    return ERR;   
  }
  else{
    return r;
  }

}

//Function to read float values from input
int readFlt(float *fP)
{
    int i = 0, isf = 0;
    char c='a';
    int sign = 1;
    float val = 0;
    float frac = 0.0;
    int Dot = 0;
    float fp = 0.1;
    float ee = 1;
    bool ee1 = 0;
    bool neg = 0;
    while(1)
    {
        __asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
        if(c ==' ' || c == '\t' || c =='\n')
          break;
        else if(c =='.')
        {
            isf=1;
            Dot++;
        }
        else if(i==0 && c =='-') 
          sign=-1;
        else
        {
            if(c >'9' || c <'0')
            {
            	if(c != 'e')
					return ERR;
				

	        	else if(c=='e')
	            {
	            	ee1 = 1;
	            	int ax = 0;
	            	__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	if(c == '+')
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	else if(c == '-')
	            	{
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            		neg = 1;
	            	}
	            	while(c !=' ' && c != '\t' && c !='\n')
	            	{
	            		ax *= 10;
	            		ax += (int)(c-'0');
	            		__asm__ __volatile__ ("syscall"::"a"(0), "D"(0), "S"(&c), "d"(1));
	            	}
	            	while(ax--){
	            			ee *= 10;
	            	}
	            	break;
	            }
	        }
            else
            {
                if(!isf)
                {
                    val *= 10;
                    val += (int)(c - '0');
                }
                else if(isf && Dot==1)
                {
                    frac = frac + fp*((int)(c - '0'));
                    fp *= 0.1;
                }

                else 
                {
                    return ERR;
                }
            }
        }

        i += 1;
    }

    *fP = ((val + frac) * (float)sign); 
    if(ee1)
    {
    	if(neg)
    		*fP /= (float)ee;
    	else
    		*fP *= (float)ee;
    }
    return OK;
}

//Function to print float number to output
int printFlt(float num){
	char buff[MAX];
	int b = 0;
	bool isn = 0;

	if(num == 0) return printStr("0");
	else if(num < 0)
	{
		isn = 1;
		printStr("-");
		num *= -1;
	}

	int num_i = (int)num;
	float num_f = num - num_i;
	b = printInt(num_i);
	if(b <= 0)
		return ERR;
	if(num_f == 0.0)
		return b;
	b++;
	printStr(".");
	if(isn) b++;
	char zero = '0';
	int i;
	for(i = 0;i<PD;i++){
		num_f *= 10;
		int t = (int)(num_f);
		buff[i] = (char)(zero+t);
		num_f = num_f - t;
	}
	buff[i] = '\0';
	printStr(buff);

	return b+i;


}