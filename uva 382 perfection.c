#include<stdio.h>
int main()
{
    long long int n;
   printf("PERFECTION OUTPUT\n");
    while(scanf("%lld",&n)==1&&n!=0)
    {

        long long int i,sum=0;

        for(i=1; i<n; i++)
        {

            if(n%i==0)
            {
                sum=sum+i;
            }

        }
        if(n==sum){

            printf("%5lld  PERFECT\n",n);


        }
        else if(n>sum)
        {
            printf("%5lld  DEFICIENT\n",n);
        }
        else if(n<sum)
            printf("%5lld  ABUNDANT\n",n);

    }
     if(n==0)
        printf("END OF OUTPUT\n");
    return 0;
}
