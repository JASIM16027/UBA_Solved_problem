#include<stdio.h>
#include<ctype.h>
int main()
{
    char string[1000];
    int i;
    printf("Enter hte string: \n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        if(islower(string[i]))
        {
            string[i]=toupper(string[i]);
        }
        else if(isupper(string[i]))
        {
            string[i]=tolower(string[i]);
        }
    }
        string[i]='\0';
        printf("the input string: \n%s",string);

    return 0;


}
