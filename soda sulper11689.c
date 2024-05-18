#include<stdio.h>
int main()
{
    long long int d[100],e,a,b,c,n,i=0,f,g,t,j;
    while(scanf("%lld",&t)==1)
    {
        for(j=0; j<t; j++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            n=a+b;


            g=0;
            while(n>=c)
            {
                d[i]=n/c;
                f=n%c;
                n=f+d[i];
                g=g+d[i];
            }
            printf("%lld\n",g);
        }
    }

    return 0;

}

