#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    unsigned long int n,a;

    while(scanf("%lu %lu",&n,&a)==2)
    {
        unsigned long int i,sum=0;

        for(i=1; i<=n; i++)
        {
            sum=sum+i*pow(a,i);

        }
        printf("%lu\n",sum);
    }


    return 0;

}

