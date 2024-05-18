#include<stdio.h>
#include<string.h>
int main()
{
    int l,t;
       int len,i,j=0;
               int cnt,k;

    char str[100000];
//    scanf("%d",&t);
//    getchar();
//
//    for(l=1;l<=t;l++)
//   {
      while(gets(str)){

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
            j+=4;
        }
        if(str[i]=='e')
        {
            j+=5;
        }
        if(str[i]=='f')
        {
            j+=6;
        }
        if(str[i]=='g')
        {
            j+=7;
        }
        if(str[i]=='h')
        {
            j+=8;
        }
        if(str[i]=='i')
        {
            j+=9;
        }
        if(str[i]=='j')
        {
            j+=10;
        }
        if(str[i]=='k')
        {
            j+=11;
        }
        if(str[i]=='l')
        {
            j+=12;
        }
        if(str[i]=='m')
        {
            j+=13;
        }
        if(str[i]=='n')
        {
            j+=14;
        }
        if(str[i]=='o')
        {
            j+=15;
        }
        if(str[i]=='p')
        {
            j+=16;
        }
        if(str[i]=='q')
        {
            j+=17;
        }
        if(str[i]=='r')
        {
            j+=18;
        }
        if(str[i]=='s')
        {
            j+=19;
        }
        if(str[i]=='t')
        {
            j+=20;
        }
        if(str[i]=='u')
        {
            j+=21;
        }
        if(str[i]=='v')
        {
            j+=22;
        }
        if(str[i]=='w')
        {
            j+=23;
        }
        if(str[i]=='x')
        {
            j+=24;
        }
        if(str[i]=='y')
        {
            j+=25;
        }
        if(str[i]=='z')
        {
            j+=26;
        }
        if(str[i]=='A')
        {
            j+=27;
        }
        if(str[i]=='B')
        {
            j+=28;
        }
        if(str[i]=='C')
        {
            j+=29;
        }
        if(str[i]=='D')
        {
            j+=30;
        }
        if(str[i]=='E')
        {
            j+=31;
        }
        if(str[i]=='F')
        {
            j+=32;
        }
        if(str[i]=='G')
        {
            j+=33;
        }
        if(str[i]=='H')
        {
            j+=34;
        }
        if(str[i]=='I')
        {
            j+=35;
        }
        if(str[i]=='J')
        {
            j+=36;
        }
        if(str[i]=='K')
        {
            j+=37;
        }
        if(str[i]=='L')
        {
            j+=38;
        }
        if(str[i]=='M')
        {
            j+=39;
        }
        if(str[i]=='N')
        {
            j+=40;
        }
        if(str[i]=='O')
        {
            j+=41;
        }
        if(str[i]=='P')
        {
            j+=42;
        }
        if(str[i]=='Q')
        {
            j+=43;
        }
        if(str[i]=='R')
        {
            j+=44;
        }
        if(str[i]=='S')
        {
            j+=45;
        }
        if(str[i]=='T')
        {
            j+=46;
        }
        if(str[i]=='U')
        {
            j+=47;
        }
        if(str[i]=='V')
        {
            j+=48;
        }
        if(str[i]=='W')
        {
            j+=49;
        }
        if(str[i]=='X')
        {
            j+=50;
        }
        if(str[i]=='Y')
        {
            j+=51;
        }
        if(str[i]=='Z')
        {
            j+=52;
        }


        }
        // printf("%d\n",j);
         cnt=0;

        for(k=2;k<j;k++)
        {
            if(j%k==0)
            {
                cnt++;
                break;
            }
    }




    if(cnt==0)

            printf("It is a prime word.\n");
            else
                printf("It is not a prime word.\n");
      }


     //printf("Case #%d: %d\n",l,j);


    //}
    return 0;

}

