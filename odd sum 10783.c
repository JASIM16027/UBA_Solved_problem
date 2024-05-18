#include<stdio.h>
int main()
{
    long long int a,b,j,t,i,sum;
    while(scanf("%lld",&t)==1)
    {

        for(j=1; j<=t; j++)
        {
            sum=0;
            scanf("%lld %lld",&a,&b);


            for(i=a; i<=b; i++)
            {
               if(i%2!=0)
               {
                   sum+=i;
               }

            }

            printf("Case %lld: %lld\n",j,sum);

        }
    }
    return 0;
}
