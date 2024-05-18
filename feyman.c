#include<stdio.h>
int main()
{
    int i,n,b,j;

    while(scanf("%d",&n)==1&&n!=0)
    {

            b=0;
            for(j=1; j<=n; j++)
            {
                b=b+j*j;
            }
            printf("%d\n",b);
        }



    return 0;
}
