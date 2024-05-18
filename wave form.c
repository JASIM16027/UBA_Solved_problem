#include<stdio.h>
int main()
{
    int a,f,n;
    int i, j,k,c,d;
  while(scanf("%d\n",&n)==1){


    for(d=0;d<n;d++)
    {

                scanf("%d %d",&a,&f);
                 for(c=0; c<f; c++){

            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++){

                    printf("%d",i);
                }
                printf("\n");
            }
            for(k=a-1; k>0; k--)
            {
                for(j=0; j<k; j++)
                {
                    printf("%d",k);
                }
                printf("\n");


            }
            if (c!=f-1)
            printf("\n");



        }
        if (d!=n-1)
            printf("\n");
        }
  }


     return 0;


}






