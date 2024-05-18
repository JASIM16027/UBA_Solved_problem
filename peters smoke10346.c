#include<stdio.h>
int main()
{
    long long int a[100],b=0,k,n,i=0,d,c;


    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        d=0;
         b=n;
        while(n>=k)
        {

            a[i]=n/k;
            c=n%k;
            n=a[i]+c;
            d=d+a[i];


        }
        printf("%lld\n",b+d);
    }

    return 0;

}
