#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)==1&&n!=0)
    {
        for(i=1; i<n; i++)
        {
            if(n%i==0){
                printf("no\n");
                break;
            }
            else if(n%i==1)
                printf("yes\n");
        }
    }
    return 0;
}
