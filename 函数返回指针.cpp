/*Program DB by Jackie at 8/9/2019 21:49*/
#include <iostream>
#include "cmath"
#include "stdio.h"
using namespace std;
int n,a[10001];  //�ж�n�ǲ������� 
bool isprime(int n)
{
if(n<2)return false;
	if(n==2)return true;
	 for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
	        return false;
  return true;
}
int* find()
{
	for(int i=1;i<=n;++i)
	   if(isprime(a[i]))
	       return &a[i];//������д�ɣ�return a+i; 
	          return NULL;//����Ҳ����򷵻�NULL; 
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	  scanf("%d",&a[i]);
	    int *p=find();
	    if(p!= NULL)
	  printf("%d\n%d\n",p,*p);//�����������ĵ�ַ�������� 
	    else 
	       printf("can't find!\n");
     return 0;

}