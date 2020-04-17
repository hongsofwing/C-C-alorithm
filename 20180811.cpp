#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int N=61;
char s1[N],s2[N],x[N],t[N];
int 11,12;
int main()
{
scanf("%s%s",&s1,&s2);
if(strlen(s1)<strlen(s2))
{
 strcpy(t,s1);
 strcpy(s1,s2);
 strcpy(s2,t);
}
strcpy(x,s1);
if(strstr(strcat(s1,x),s2)==NULL)printf("false.\n");
else printf("true.\n");
return 0;
}
