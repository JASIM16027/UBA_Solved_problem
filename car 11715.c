#include<stdio.h>
#include<math.h>
int main()
{
    long long  int n;

    int cnt=1;
    double a,u,v,s,t;


    while(scanf("%lld",&n)==1&&n!=0)
    {
        if(n==1)

        {
            scanf("%lf %lf %lf",&u,&v,&t);

            a=(v-u)/t;
            s=u*t+.5*a*(t*t);
            printf("Case %d: %.3lf %.3lf\n",cnt,s,a);
    }

        else if(n==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*(t*t);
            printf("Case %d: %.3lf %.3lf\n", cnt,s,t);

        }

        else if(n==3)

        {
            scanf("%lf %lf %lf",&u,&a,&s);

            v=sqrt((u*u)+2*a*s);

            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n", cnt,v,t);

        }


        else if(n==4)

        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-2*a*s);

            t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n", cnt,u,t);


        }


        cnt++;

    }
    return 0;
}

