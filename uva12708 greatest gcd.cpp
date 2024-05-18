#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000],a[10000];
    int i,n,arr;
    gets(str);
    for(i=0;str[i]!=0;i++)
      arr=str[i]-'0';
      printf("%d ",arr);

    return 0;
}

