#include<stdio.h>
int main()
{
    int n,a,i=1;
    while(scanf("%d",&n)==1&&n!=0)
    {
        a=n/2;
        printf("Case %d: %d\n",i,a);
        i++;
    }
    return 0;
}
