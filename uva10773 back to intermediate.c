#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double d,v,u,t1,t2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        if(v>=u)
            printf("Case %d: can't determine\n",i);
        else
        {
            t1=d/u;
            t2=d/sqrt(u*u-v*v);
            if(t1==t2)
                printf("Case %d: can't determine\n",i);
            else
                printf("Case %d: %.3lf\n",i,fabs(t1-t2));
        }
    }
    return 0;
}
