#include<stdio.h>
int main()
{
    long long int a,b,c,t,i;
    while(scanf("%lld",&t)==1)

    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            if(a+b>c&&a+c>b&&b+c>a)
            {
                if(a==b&&b==c)
                    printf("Case %lld: Equilateral\n",i);
                else if(a==b||b==c||a==c)
                    printf("Case %lld: Isosceles\n",i);
                    else
                        printf("Case %lld: Scalene\n",i);
            }
            else
                printf("Case %lld: Invalid\n",i);
        }
    }
    return 0;
}