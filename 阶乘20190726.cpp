#include<iostream>
using namespace std;
//1!+2!+3!+...+10!
//Output:4037913
int js(int);
int main()
{
	int sum=0;
	for(int i1=1;i1<=10;i1++)
		sum+=js(i1);//sum=sum+s;
		cout<<"sum="<<sum<<endl;
		return 0;
}
    int js(int n)
{
    	int s=1;
    	for(int i2=1;i2<=n;++i2)
    	s *=i2; //s=s *i2;
    	return s;   
} 
