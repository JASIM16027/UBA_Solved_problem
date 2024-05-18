#include<stdio.h>
void palindrome(unsigned long long int n,int l);
int main()
{
   int t;

  scanf("%d",&t);

        unsigned long long int n;
         int l=1,i;
         for(i=1;i<=t;i++){
    long long int d,rev=0,temp,rev_add;
  scanf("%llu",&n);

   temp=n;
     while(n!=0)
    {
        d=n/10;
        rev=rev*10+n%10;

        n=d;

    }

    rev_add=rev+temp;

    palindrome(rev_add,l);

         }


    return 0;

}
void palindrome( unsigned long long int n,int l)
{
  unsigned long long  int d,r;
  unsigned long long int rev1=0,h,c;

    r=n;

    while(n!=0)
    {
        h=n/10;
        rev1=rev1*10+n%10;
        n=h;

    }



    c=rev1+r;
    if(r==rev1)

    printf("%d %llu\n",l,r);

    else

        palindrome(c,l+1);


}
