#include <stdio.h>
int main()
{
    char word[1000];
    int i,p;
    while(gets(word))
    {
        p=0;
        for(i=0; word[i]!='\0'; i++)
        {

            if(((word[i]>='a'&& word[i]<='z') || (word[i]>='A' && word[i]<='Z'))
               && ((word[i+1]<'a'|| word[i+1]>'z') && (word[i+1]<'A' || word[i+1]>'Z')))



                p++;
        }
        printf("%d\n",p);
    }
}
