#include <iostream>

using namespace std;

#define LEN 1000000
int printStringUpper(char *s){
	char str[LEN];
	int i=0;
	int x=32;
	
	while(s[i]!='\0'){
		if(s[i]>='a'&&s[i]<='z')
		str[i]=s[i]&(~x);
        else
        	str[i]=s[i];
		i++;
			}
			str[i]='\n';
			i++;
	str[i]='\0';
	__asm__ __volatile__ (
	 "movl $1, %%eax \n\t"
	 "movq $1, %%rdi \n\t"
	 "syscall \n\t"
	 :
	 :"S"(str), "d"(i)
	); // $1: on stdin
	return i-1;
}
int readHexInteger (int *n) {
	int siz=100;
	char str[siz];
    for(int i=0;i<siz;i++)  
    	{
    	    str[i]='\0';
    	    
    	}


	asm("syscall \n\t"
	    :
	    :"a"(0), "D"(0), "S"(str), "d"(siz)
	);

	int bytes=0;
	while(str[bytes]>=32 && str[bytes]<=126)
	bytes++;

	for(int i=0;i<bytes;i++)
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]=='-'&&i==0))
		{
			continue;
		}
		else 
		return 0;
	}
	int k=1;
	int answer=0;
	
    for(int i=bytes-1;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<='9')
            {
                answer+=k*(str[i]-'0');
                k=k*16;
                
            }
        else if(str[i]>='a' && str[i]<='f')
            {
                answer+=k*(str[i]-'a'+10);
                k=k*16;
                
            }
    }
    if(str[0]=='-')
        answer=-answer;
        
    *n=answer;
    
    return 1;
}
int printHexInteger(int n){
	char str[LEN];
	char q='0';
	int i=0;
	int j=0;
	if(n==0)
	str[i++]=q;
	else{
		if(n<0){
			str[i]='-';
			i++;
			n=-n;
			j++;
		}
		while(n>0){
			int pp=n%16;
			if(pp>=0&&pp<=9)
			str[i]='0'+pp;
			else{
				str[i]='A'+pp-10;
			}
			n=n/16;
			i++;
		}
		str[i]='\0';
		int k=i-1;
		while(j<k){
			char t=str[j];
			str[j++]=str[k];
			str[k--]=t;
		}
	}
	str[i++]='\n';
	__asm__ __volatile__ (
	 "movl $1, %%eax \n\t"
	 "movq $1, %%rdi \n\t"
	 "syscall \n\t"
	 :
	 :"S"(str), "d"(i)
	); // $1: on stdin
	return i-1;
}
int readFloat (float *f){
	int siz=100;
	char str[siz];
    for(int i=0;i<siz;i++)  
    	{
    	    str[i]='\0';
    	    
    	}


	asm("syscall \n\t"
	    :
	    :"a"(0), "D"(0), "S"(str), "d"(siz)
	);

	int bytes=0;
	int cc=0;
		while(str[bytes]>=32 && str[bytes]<=126)
	    bytes++;
	for(int i=0;i<bytes;i++){
		if((str[i]>='0'&&str[i]<='9')||(str[i]=='.')||(str[i]=='-'&&i==0))
		{
			if(str[i]=='.')
			cc++;
			if(cc>1)
			return 0;
		}
		else 
		return 0;
	}
	float answer=0;
	int i,j=0;
	if(str[0]=='-')
	j++;
	for(i=j;i<bytes;i++)
	{
		if(str[i]=='.')
		break;
		answer=answer*10+(str[i]-'0');
	}
	float k=0.100000;
	for(int p=i+1;p<bytes;p++)
	{
		answer+=((str[p]-'0')*k);
		k=k*0.100000;
	}
	if(str[0]=='-')
	answer=-answer;
	
	*f=answer;
	return 1;
}
int printFloat(float f){
	
	int n=(int)f;
	char str[LEN];
	int i=0;
	int j, k;
	int bytes=0;
		if (n < 0) {
			str[i]='-';
			i++;
			n = -n;
		}
			if (n == 0) {
			str[i]='0';
			i++;
			
		}
	if(n!=0){
			while (n) {
			int pp = n%10;
			str[i] = (char)('0' + pp);
			i++;
			n /= 10;
		} 
		if (str[0] == '-')
		j = 1;
		else j = 0;
		k = i - 1;
		while (j < k) {
			char temp=str[j];
			str[j++] = str[k];
			str[k--] = temp;
		}
	}
	str[i]='.';
	bytes=i+1;
	int it=0;
	if(str[0]=='-')
	f=-f;

	while(f!=(int)f && (it<4))
	{
		f=f*10.0;
		int qq=(int)f;
		int pp=qq%10;
		
		str[bytes++]=(char)('0'+pp);
		it++;
	}
	str[bytes++]='\0';
	__asm__ __volatile__ (
	 "movl $1, %%eax \n\t"
	 "movq $1, %%rdi \n\t"
	 "syscall \n\t"
	 :
	 :"S"(str), "d"(bytes)
	); // $1: on stdin
	return bytes-1;
}
