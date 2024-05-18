#include<stdio.h>
int main()
{
   long long int n;
    while(scanf("%lld",&n)==1&&n!=0)
    {


       long long int a,b,i,x[10000],y[10000],x1[10000],y1[10000],j,k;

        scanf("%lld %lld",&a,&b);
        for(i=0; i<n; i++)
        {
            scanf("%lld %lld",&x[i],&y[i]);

        }
        for(j=0; j<n; j++)
        {


            x1[j]=x[j]-a;
            y1[j]=y[j]-b;
        }
        for(k=0; k<n; k++)
        {

            if(x1[k]==0||y1[k]==0)
                printf("divisa\n");
            else if(x1[k]>0&&y1[k]>0)
                printf("NE\n");
            else if(x1[k]>0&&y1[k]<0)
                printf("SE\n");
            else if(x1[k]<0&&y1[k]>0)
                printf("NO\n");
            else if(x1[k]<0&&y1[k]<0)
                printf("SO\n");
        }

    }


    return 0;

}
