#include<stdio.h>
#include<math.h>
int main()
{
    double i;
    for(i=0;i<1000;i++){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

        double area,s;

        s=(a+b+c)/2;

        area=(4.0*(sqrt(s*(s-a)*(s-b)*(s-c))))/3.0;
        if(area>0)
            printf("%.3f\n",area);

        else
        {
            area=-1;

            printf("%.3lf\n",area);


        }

    }


        return 0;

    }
