#include<stdio.h>
#include<math.h>
int main()
{
    int n;

    while(scanf("%d",&n)==1){
            int i,a[10000],d[10000],j,b,c;


    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        d[i]=fabs(a[i]-a[i+1]);

    }

    for(j=1;j<n;j++)
    {
       if(b=fabs(a[j]-a[j+1])==1)
        b=1;

    }
    if(b==1||n==1)
        printf("Jolly\n");
    else
        printf("Not jolly\n");

    }


    return 0;
}
