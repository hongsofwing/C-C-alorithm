/*program db by Jackie*/
#include<iostream>
using namespace std;
int fac(int);
int main()
{
    int x;
    cin>>x;
    cout<<x<<"!="<<fac(x)<<endl;
    return 0;
}
int fac(int n)
{
	return n==0 ? 1:n*fac(n-1);
}
/*
�õݹ麯����x!
x!= 1          (x = 0)
x!= x*( x - 1)! (x > 0)
*/