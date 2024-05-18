#include<stdio.h>
int main()
{
  long long  int a,b,n,d,c,f,t,i;;



    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&n);
            if(a==b)
            {
                f=n/2;
                printf("%d\n",f);
            }
            else{


            float c=(float)(a+b)/3;
              float d=a-c;
             f=(float)n*(d)/c;
            if(f<0)
                printf("0\n");
                else
            printf("%lld\n",f);
            }
        }
    }
    return 0;
}
