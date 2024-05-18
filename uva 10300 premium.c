#include<stdio.h>
int main()
{
    int t,l;
    scanf("%d",&t);


        for(l=1;l<=t;l++){
        unsigned long long n,f,a, e,sum,i,j;


        scanf("%llu",&n);
         sum=0;
        for(i=1; i<=n; i++){

        {
            scanf("%llu %llu %llu",&f,&a,&e);

            sum=sum+f*e;
        }



        }
        printf("%lld\n",sum);
    }
    return 0;

}
