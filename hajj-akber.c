#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i=0;
   while(scanf("%s",str)==1){

    if(!strcmp(str,"*")){
        break;
        }

    else if(!strcmp(str,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",i++);
    else if(!strcmp(str,"Umrah"))
        printf("Case %d: Hajj-e-Asghar\n",i++);
   }

return 0;
}




