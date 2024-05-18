#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{

    int t,i;
    while( scanf("%d",&t)==1)
    {

        for(i=0; i<t; i++)
        {
            double radi,wide,len,red,green;
            scanf("%lf",&len);
            wide=.6*len;
            radi = len/5;

            red = pi*(radi*radi);
            green = (wide*len)-red;
            printf("%.2lf %.2lf\n",red,green);
        }
    }

    return 0;
}



