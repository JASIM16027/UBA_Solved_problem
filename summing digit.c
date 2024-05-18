#include <stdio.h>
int main()
{
  unsigned long long int num;

   while( scanf("%llu",&num)==1&&num!=0){

   unsigned long long int x,r;

    printf("%llu\n",(x=num%9)?x :9 );
    }
    return 0;
}
