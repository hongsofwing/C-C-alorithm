/*program db by Jackie at 7/29/2019 21:05*/
#include<iostream>
#include<cstdio>
using namespace std;
float f(float x,float n)
{
	if(n==1) return x/(1+x);
	else return x/(n+f(x,n-1));
}
int main()
{
	int a,b;
	cin>>a>>b;
	printf("%.2f",f(a,b));
	return 0;
}
