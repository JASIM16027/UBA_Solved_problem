#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,x,y,t,d,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    d=(x*y)/gcd(b,a%b);
    if(gcd(b,a%b)<x)
        printf("-1\n");
    else
        printf("%d %d\n",gcd(b,a%b),d);
    }
    return 0;

}
int gcd(int a,int b)

{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
