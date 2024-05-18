#include<stdio.h>
int main()
{
   long long int i,x,b;
    while(scanf("%lld",&x)!=EOF){
            b=0;
    for(i=1;i<=x;i++)
    {
        b=b+i*(i*i);
    }
    printf("%lld\n",b);
    }
    return 0;
}
