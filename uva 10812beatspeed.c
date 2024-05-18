#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        long long int c,d,e,f,a,b;
        scanf("%lld %lld",&a,&b);


            c=(a+b)/2;

            d=c-b;
            if(c+d==a&&c-d==b&&c>=0&&d>=0){


            printf("%lld %lld\n",c,d);
            }

        else
            printf("impossible\n");
    }


    return 0;

}
