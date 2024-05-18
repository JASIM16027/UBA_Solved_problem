#include<stdio.h>
int main()

{
   long long int b,p,m,i,arr[10000],d,x,temp[1000],pow;
    long long int c,j;
   while(scanf("%lld %lld %lld",&b,&p,&m)==3){


    i=0;
    while(p!=0)
    {
        c=p/2;
        arr[i]=p%2;

        p=c;


        i++;

    }
    int k=0;

    for(j=i-1;j>=0;j--)
    {

      temp[k]=arr[j];
      k++;

    }
    pow=b%m;
    x=1;
    for(i=0;i<k;i++)
    {
        if(arr[i]==1)
        {
            x=(x*pow)%m;
        }
        pow=(pow*pow)%m;

    }

    printf("%lld\n",x);


   }


    return 0;
}


