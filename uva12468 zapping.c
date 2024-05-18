#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b)==2&&a!=-1&&b!=-1)
    {
        c=fabs(a-b);
        if(c>50)
        {
            d=100-(c);

            printf("%d\n",d);
        }
        else
            printf("%d\n",c);
    }


    return 0;
}
