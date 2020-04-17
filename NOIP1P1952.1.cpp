#include <iostream>
/*Programming dby hongsofwing Jan 4th 2020 21:51*/
using namespace std;
const int MAXN=10001;
int main()
{
    int n,i,j;
    int x;// x = countflag;
    float temp,a[MAXN];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=n-1;i>=1;i--)
    {
	    for(j=0;j<i;j++)
	    {
		    if(a[j]>a[j+1])
			    swap(a[j],a[j+1]);
			for(x=0;x<n;x++)
			    cout<<a[x]<<" ";
			    cout<<"\n";
	    }
	
    }
    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
    return 0;
}

