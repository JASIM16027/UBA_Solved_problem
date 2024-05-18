#include<stdio.h>
int arr[250001];
int main()
{
    int J,R;
    while(scanf("%d %d",&J,&R)==2)
    {
        int c,i,j,k,p,sum,max=0,l=0;
        for(i=0; i<J*R; i++)
        {
            scanf("%d",&arr[i]);

        }

        int gg;
        sum=0;
        max=0, k;
        for(k=0; k < J; k++)
        {
            sum=0;
            for(i = k; i < J*R; i+=J)
            {
                sum+=arr[i];

            }

            if(max<=sum)
            {
                max= sum;
                gg = k;

            }
        }
        printf("%d\n",gg+1);


    }



    return 0;
}
