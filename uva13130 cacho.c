#include<stdio.h>
int main()
{
    int t,l;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {

        int i,j,k=0,a[10000],cnt=0,b[10000];
        for(i=0; i<5; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<5; j++)
        {

            if(a[j]<a[j+1])
            {
                b[k]=a[j+1]-a[j];

                if(b[k]==1)
                {

                    cnt++;

                }



            }
             k++;


        }


        if(cnt==k-1)
            printf("Y\n");
        else
            printf("N\n");


    }
    return 0;
}
