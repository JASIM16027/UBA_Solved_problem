#include<stdio.h>
int main()
{
    unsigned long long int t1,t2,f,a,c1,c2,c3,t,i,c,d;
    while(scanf("%llu",&t)==1)
    {
        if(t<100)
        {
            for(i=1; i<=t; i++)
            {
                scanf("%llu %llu %llu %llu %llu %llu %llu",&t1,&t2,&f,&a,&c1,&c2,&c3);
                if(c1>=c2&&c2>=c3)
                    c=(c1+c2)/2;
                else if(c1>=c3&&c3>=c2)
                    c=(c1+c3)/2;
                else if(c1<=c2&&c2<=c3)
                    c=c3+c2;

                else
                {
                    c=(c2+c3)/2;
                }
                d=t1+t2+f+a+c;
                if(d>=90&&d<=100)
                    printf("Case %llu: A\n",i);
                else if(d>=80&&d<90)
                    printf("Case %llu: B\n",i);
                else if(d>=70&&d<80)
                    printf("Case %llu: C\n",i);

                else if(d>=60&&d<70)
                    printf("Case %llu: D\n",i);
                else if(d<60&&d>=0)

                    printf("Case %llu: F\n",i);
            }
        }
    }
    return 0;


}
