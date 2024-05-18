#include<stdio.h>
int main()
{
    int a[100],b,n,i;


    while(scanf("%d",&n)==1&&n!=0)
    {

        while(n>=10)
        {

            b=0;
            i=0;
            while(n)
            {
                a[i]=n/10;
                b=b+n%10;
                n=a[i];
                i++;
            }

            if(b>9)
                n=b;


        }
        printf("%d\n",b);

    }


    return 0;

}
