#include<stdio.h>
int ugly[100000];
int main()
{
    long long int i,j,k,n,b=2,c=3,d=5;
    scanf("%lld",&n);
    ugly[1]=1;
    ugly[2]=1;
    ugly[5]=1;

    for(i=2;i<=n;i++)
    {
        b=b*i;

        ugly[b]=1;
    }
    for(j=3;j<=n;j++)
    {
        c=c*j;
        ugly[c]=1;
    }
    for(k=5;k<=n;k++)
    {
        d=d*k;
        ugly[d]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(ugly[i]==1)
        {
            printf("%d\n",i);
        }
    }



   return 0;
}
