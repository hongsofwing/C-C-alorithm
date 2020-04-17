#include<iostream>
#include<cstring>
#include<cstdio>
char s[80];
int l;
int main()
{
using namespace std;
gets(s);
l=strlen(s);
for(int i=0;i<l;++i)
{
if(s[i]=='z'||s[i]=='Z')s[i]=s[i]-25;
else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        s[i]=s[i]+l;
        cout<<s[i];
}
return 0;
}
