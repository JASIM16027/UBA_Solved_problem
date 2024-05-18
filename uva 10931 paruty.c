#include<stdio.h>
int main()
{
    int index=0,binary[100],rem,i=0,cnt=0,n,a[100];
    scanf("%d",&n);


    while(n!=0)
    {
        rem=n%2;
        binary[index++]=rem;
        if(rem==1)
        {
            cnt++;
        }
        n=n/2;
    }
    for(i=0; i<index; i++)
    {

       a[i]=binary[i];
    }





}
