#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j=0,l=0;
    char str[100],st1[11]="one",st2[11]="two",st3[11]="three";
   while(gets(str)){
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='o'||str[i]=='n'||str[i]=='e')
        {
            j++;
        }


         else if(str[i]=='t'||str[i]=='w'||str[i]=='o')
        j++;

            l++;
        if(str[i]=='h'||str[i]=='r'||str[i]=='e')
        j++;
        else
            l++;




    }
    printf("%d\n",l);
   }
    return 0;
}
