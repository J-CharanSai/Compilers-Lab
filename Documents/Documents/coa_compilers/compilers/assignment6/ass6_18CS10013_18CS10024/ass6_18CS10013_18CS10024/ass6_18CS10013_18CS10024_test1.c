int a[1000];

void swap(int i)

{

    int t1;

   

    t1=a[i];

    a[i]=a[i+1];

    a[i+1]=t1; 

}

 

int main(int argc,char *argv[])

{

   int i,n=1000;

   for (i = 0; i < n-1; i++){    

     int j;

    for (j = 0; j < n-i-1; j++)

        if (a[j] > a[j+1])

            swap(j);

 }

 return 0;

}
