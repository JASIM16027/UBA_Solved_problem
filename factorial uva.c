#include<stdio.h>
int main()
{
     long  long int n,i;

    while(scanf("%lld",&n)!=EOF){
         long  long int fact=1;

    for( i=1;i<=n;i++)
    {
        fact =fact*i;
    }
    if(fact<10000)
        printf("Underflow!\n");
    else if(fact>6227020800)
        printf("Overflow!\n");
    else
        printf("%lld\n",fact);

    }
    return 0;
}
