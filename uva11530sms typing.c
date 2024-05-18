#include<stdio.h>
#include<string.h>
int main()
{
    int l,t;
       int len,i,j=0;
    char str[100000];
    scanf("%d",&t);
    getchar();

    for(l=1;l<=t;l++)
   {
       gets(str);

        j=0;


    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a')
        {
            j++;
        }
        if(str[i]=='b')
        {
            j+=2;
        }
        if(str[i]=='c')
        {
            j+=3;
        }
        if(str[i]=='d')
        {
            j++;
        }
        if(str[i]=='e')
        {
            j+=2;
        }
        if(str[i]=='f')
        {
            j+=3;
        }
        if(str[i]=='g')
        {
            j++;
        }
        if(str[i]=='h')
        {
            j+=2;
        }
        if(str[i]=='i')
        {
            j+=3;
        }
        if(str[i]=='j')
        {
            j++;
        }
        if(str[i]=='k')
        {
            j+=2;
        }
        if(str[i]=='l')
        {
            j+=3;
        }
        if(str[i]=='m')
        {
            j++;
        }
        if(str[i]=='n')
        {
            j+=2;
        }
        if(str[i]=='o')
        {
            j+=3;
        }
        if(str[i]=='p')
        {
            j++;
        }
        if(str[i]=='q')
        {
            j+=2;
        }
        if(str[i]=='r')
        {
            j+=3;
        }
        if(str[i]=='s')
        {
            j+=4;
        }
        if(str[i]=='t')
        {
            j++;
        }
        if(str[i]=='u')
        {
            j+=2;
        }
        if(str[i]=='v')
        {
            j+=3;
        }
        if(str[i]=='w')
        {
            j++;
        }
        if(str[i]=='x')
        {
            j+=2;
        }
        if(str[i]=='y')
        {
            j+=3;
        }
        if(str[i]=='z')
        {
            j+=4;
        }
        if(str[i]==' ')
        {
            j++;
        }


    }

     printf("Case #%d: %d\n",l,j);


    }
    return 0;

}
