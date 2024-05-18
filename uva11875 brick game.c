#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,a[100000],n,l,cnt,b,cnt1,h,min=0;
    scanf("%d",&n);
    if(n%2==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n-1; i++)
        {
            k=0;
            cnt=0;
            cnt1=0;

            for(j=0; j<n-1; j++)
            {
                if(a[j]<a[j+1])
                {
                    cnt++;
                }
                else if(a[j]>a[j+1])
                {
                    cnt1++;
                }
                k++;

            }
        }
        if(k==cnt||k==cnt1)
        {


            for(i=0; i<n; i++)
            {

                l=0;
                 b=0;

                for(j=0; j<n; j++)
                {
                    a[l]=fabs(a[i]-a[j]);

                    l++;
                    if(a[l]>0)
                    {
                        b=b+a[l];
                    }
                }
                if(b<min)
                    min=b;


            }
             printf("%d\n",min);



        }
    }
    return 0;
}
