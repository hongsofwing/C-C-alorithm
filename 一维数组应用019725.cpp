#include<cstdio>
/*Intpt:
	1
	2
	3
	4
	5
Output:
	54321
*/
int a[10];
int main()
{
	
	
	int x,n=0;
	while (scanf("%d",&x)==1)//如果输入数字，为真 
	{
		a[n++]=x;	/*a[n]=x;n++;*/
	}
	for(int i=n-1;i>=1;--i)
	{
		printf("%d",a[i]);
	}
	
	printf("%d\n",a[0]);
	return 0;
	
}