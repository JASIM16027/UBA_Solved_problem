#include<stdio.h>
int main()
{
    long long int l,t,temp;
    scanf("%lld",&t);
    for(l=1; l<=t; l++)
    {
        long long int i,n,j,array[100000];
        scanf("%lld",&n);
        int k=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&array[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1-i; j++)
            {
                if(array[j]>array[j+1])
                {
                    k++;
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;

                }



            }
        }
        printf("Optimal train swapping takes %lld swaps.\n",k);
    }
    return 0;


}
