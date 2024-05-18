#include<stdio.h>
#include<math.h>

int main()
{


    int  t,k;
    scanf("%d",&t);
    {
        for(k=1;k<=t;k++){

       unsigned long long int b[10000],j,t,sum,i,n;
       scanf("%llu",&n);
       double d;

        t=n;

        i=0;
        while(n)
        {
            b[i]=n%10;
            n=n/10;

            i++;

        }

        sum=0;


        for(j=0; j<i; j++)
        {


          d= pow(b[j]*1.0,i*1.0);
            sum=sum+d;

        }
        if(t==sum)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
        }
    }
    return 0;



}
