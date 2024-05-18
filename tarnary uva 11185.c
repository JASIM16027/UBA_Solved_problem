#include<stdio.h>
int main()
{
 long long int arr[100000],n;
   while(scanf("%lld",&n)==1){
        long long int i=0,b,c,j,cnt=0;
        if(n==0)
        printf("0");
   else if(n<0)
   {
       break;
   }
   else


   while(n!=0)
    {
        c=n/3;
        arr[i]=n%3;

        n=c;
        i++;

    }


    for(j=i-1;j>=0;j--)
    {

       printf("%lld",arr[j]);


    }

    printf("\n");


   }


    return 0;
}

