#include<stdio.h>
int main()
{
   long long  int n,a[1000],rem;
    while(scanf("%lld",&n)==1&&n!=0){
            long long int total=0,i=0;
    while(n!=0)
    {
        a[i]=n/3;
        rem=n%3;
        n=a[i]+rem;
        if(n==2)
        {
            n=n+1;
        }
    else if(n==1)
    {
        n=n-1;
    }

        total=total+a[i];
        i++;
    }
    printf("%lld\n",total);
    }
    return 0;
}
