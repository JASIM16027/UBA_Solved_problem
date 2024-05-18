#include<stdio.h>
int main()
{
    long long int n;

    while(scanf("%lld",&n)!=EOF)
    {
        long long int i,j,array[100000],temp,index=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&array[i]);

        }
        for(i=0; i<n-1; i++)
            for(j=0; j<n-1-i; j++)
            {
                if(array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    index++;

                }
            }
        printf("Minimum exchange operations : %lld\n",index);
    }
    return 0;
}
