#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    char str[100000];
    while(gets(str)){
    len = strlen(str);
    for(i=0; i<len;i++){
//        if(str[i]=='1')
//            printf("*");
//    if(str[i]=='J')
//        printf("C");
//    if(str[i]=='K')
//        printf("D");
//    if(str[i]=='T')
//        printf("M");
//    if(str[i]=='I')
//        printf("B");
//    if(str[i]=='L')
//        printf("E");
//    if(str[i]=='k')
//        printf("d");
//    if(str[i]=='p')
//        printf("i");
//    if(str[i]=='z')
//        printf("s");
//    if(str[i]=='{')
//        printf("t");
//    if(str[i]=='o')
//        printf("h");
//    if(str[i]=='l')
//        printf("e");
//    if(str[i]=='y')
//        printf("r");
//    if(str[i]=='h')
//        printf("a");
//    if(str[i]=='t')
//        printf("m");
//    if(str[i]=='r')
//        printf("k");
//    if(str[i]=='v')
//        printf("o");
//    if(str[i]=='m')
//        printf("f");
//    if(str[i]=='j')
//        printf("c");
//    if(str[i]=='u')
//        printf("n");
//    if(str[i]=='s')
//        printf("l");
//    if(str[i]=='w')
//        printf("p");
//    if(str[i]=='n')
//        printf("g");
//
//    if(str[i]=='\'')
//        printf(" ");
//    if(str[i]=='P')
//        printf("I");
//        if(str[i]=='x')
//        printf("q");
//        if(str[i]=='|')
//        printf("u");
//         if(str[i]=='5')
//        printf(".");


printf("%c",str[i]-7);
 if(i==len-1)
          printf("\n");

    }

    }
    return 0;


}
