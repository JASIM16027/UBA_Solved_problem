#include<stdio.h>
int main()
{
    long long int a,b,t;
    while(scanf("%lld",&t)==1)
    {
        int i;

        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld",&a,&b);
            if(b%a==0)
                printf("%lld %lld",a,b);
            else
                printf("-1");
                if(i!=t)
                    printf("\n");
        }
        printf("\n");

    }
    return 0;
}
