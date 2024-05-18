#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

        int k;
        for(k=1; k<=t; k++)
        {
             long long int i,j,n,temp=0,b,max=0;
            scanf("%lld",&n);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<i; j++)
                {
                    if(i%j==0)
                        b=j;
                    if(b>max){
                        max=b;
                    }

                }
            }

            printf("%lld\n",max);
        }

    return 0;
}
