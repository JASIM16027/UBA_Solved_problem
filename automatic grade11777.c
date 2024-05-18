
#include<stdio.h>
int main()
{
    int t1,t2,f,a,c1,c2,c3,t,i,c,d;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&c1,&c2,&c3);
            if(c1>c2&&c2>c3)
                c=(c1+c2)/2;
            else if(c1>c3&&c3>c2)
                c=(c1+c3)/2;
                else if(c1==c2&&c2==c3)
                    c=c1+c2;

            else
            {
                c=(c2+c3)/2;
            }
            d=t1+t2+f+a+c;
            if(d>=90)
                printf("Case %d: A\n",i);
            else if(d>=80&&d<90)
                printf("Case %d: B\n",i);
            else if(d>=70&&d<80)
                printf("Case %d: C\n",i);

            else if(d>=60&&d<70)
                printf("Case %d: D\n",i);
            else if(d<60&&d>=0)

                printf("Case %d: F\n",i);
        }
    }
    return 0;


}
