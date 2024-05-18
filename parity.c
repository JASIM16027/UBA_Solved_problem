#include<stdio.h>
int main()
{
   long long int arr[1000],n;
   while(scanf("%lld",&n)==1&&n!=0){
       long long int i,b,c,j,cnt=0;
    i=0;
    while(n!=0)
    {
        c=n/2;
        arr[i]=n%2;

        n=c;
         if(arr[i]!=0)
        {
            cnt++;

        }

        i++;

    }
     printf("The parity of ");

    for(j=i-1;j>=0;j--)
    {

       printf("%lld",arr[j]);


    }

     printf(" is %lld (mod 2).\n",cnt);
   }
    return 0;
}
