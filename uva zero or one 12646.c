#include<stdio.h>
int main()
{
    long long int a,b,c;

    while(scanf("%lld %lld %lld",&a,&b,&c)==3){
    if(a==1&&b==0&&c==0)
        printf("A\n");
    else if(b==1&&a==0&&c==0)
        printf("B\n");
    else if(c==1&&b==0&&a==0)
        printf("C\n");
    else if(a==1&&b==1&&c==0)
        printf("C\n");
    else if(b==1&&c==1&&a==0)
        printf("A\n");
    else if(a==1&c==1&&b==0)
        printf("B\n");
    else
        printf("*\n");
    }
    return 0;

}
