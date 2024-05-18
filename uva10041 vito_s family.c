#include<stdio.h>
#include<math.h>
int main()
{
   long long int a,b,n,i,j,t,arr[100000],sum;
    scanf("%lld",&t);

    for(a=1;a<=t;a++){
    scanf("%lld",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<n;j++)
    {
        b=fabs(arr[j]-arr[j+1]);
        if(b)
        sum=sum+b;
        // printf("%lld\n",sum);
    }
    printf("%lld\n",sum);
    }
    return 0;

}
