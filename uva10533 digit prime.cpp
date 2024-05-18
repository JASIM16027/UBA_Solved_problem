#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define max 1000000
int primes[max],m=0;
void seive(int n)
{
    int x=sqrt(n);
    int i,j;
    char prime[max]={0};
    prime[0]=prime[1]=1;
    for(i=4;i<=n;i=i+2)
    {
        prime[i]=1;
    }
    for(i=3;i<=x;i=i+2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<n;j=j+i)
                prime[j]=1;
        }
    }

    for(i=0;i<=n;i++)
    {
        if(prime[i]==0)
        {
           primes[m]=i;
           m++;

        }
    }


}
int main()
{
    int n,i,p;
    scanf("%d",&n);
    seive(n);
    for(i=0;i<m;i++)
    {
        printf("%d ",primes[i]);

    }

    return 0;


}
