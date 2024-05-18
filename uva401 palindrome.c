#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2;
    char str[1000],temp[1000];
    char str1[1000]="AEHIJLMOSTUVWXYZ12358";
    char str2[1000]="A3HILJMO2TUVWXY51SEZ8";
    while( gets(str))
    {
        strcpy(temp,str);
        strrev(temp);
      len1=strlen(str1);
      len2=strlen(str2);




        if(!strcmp(temp,str))
        {
            if(s)

            printf("%s -- is a regular palindrome.\n");
        }
        else
            printf("%s -- is not a regular palindrome.\n");
    }
    return 0;
}
