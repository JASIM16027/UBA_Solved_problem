#include<stdio.h>
int main()
{
    unsigned long long int a,b;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        if(a>b)
            printf("%llu\n",a);
        else if(a<b)
            printf("%llu\n",b);
        else
            printf("%llu\n",a);

    }
        return 0;


}
