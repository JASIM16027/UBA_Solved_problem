#include<stdio.h>
#include<math.h>
long  int prime(long  int n)
{
    long  int i,root;
    root=sqrt(n);
    for(i=2;i<=root;i++)

    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
 long int reverse( long int n)
{
    long int rev=0;
    while(n>0)
    {
        rev=10*rev+n%10;
        n=n/10;
    }
    return rev;
}
int main()
{
     long int n,temp=0;
    while(scanf("%ld",&n)==1){

    if(prime(n))
    {
        temp=reverse(n);
    if(prime(temp))
    {
        printf("%ld is emirp\n",n);
    }

    else
        printf("%ld is  prime\n",n);
    }
    else
        printf("%ld is not prime\n",n);
    }
    return 0;

}


