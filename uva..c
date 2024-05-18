#include<stdio.h>
long long int uva(long long int n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return uva(3*n+1)+1;
    else
        return uva(n/2)+1;
}
long long int mxcycle(long long a,long long b)
{
    long long int mx=0,cycle;
    if(a>b)

    return mxcycle(b,a);
    while(a<=b)
    {
      cycle=uva(a);
      if(mx<cycle)
            mx=cycle;
            a++;
    }

}
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        printf("%lld %lld %lld\n",a,b,mxcycle(a,b));
    }

     return 0;

}
