#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{

    char str[100000000];
    while(scanf("%s",str))
    {

        char a[10000];
        unsigned long long int i,l1,l2,b=0,c=0,sum=0;
        scanf("%s",a);

        l1=strlen(str);
        l2=strlen(a);


        for(i=0; i<l1; i++)
        {
            b=b*10+str[i]-'0';

        }
        for(i=0; i<l2; i++)
        {
            c=c*10+a[i]-'0';

        }


        for(i=1; i<=b; i++)
        {

            sum=sum+i*pow(c,i);
        }

        printf("%llu\n",sum);
    }
    return 0;

}
