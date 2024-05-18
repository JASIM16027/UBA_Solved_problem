#include<stdio.h>
int main()
{
    long long int t,a, b,c,d,i;
    while(scanf("%lld",&t)==1)
    {
        for(i=0; i<t;++i)
        {
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

                if(a==b&&b==c&&c==d)
                    printf("square\n");
                else if(a==c&&b==d||a==d&&b==c||a==b&&c==d)
                    printf("rectangle\n");
                else if(a+b+c>=d&&a+b+d>=c&&a+c+d>=b&&b+c+d>=a)

                    printf("quadrangle\n");

            else
                printf("banana\n");
        }
    }
    return 0;
}
