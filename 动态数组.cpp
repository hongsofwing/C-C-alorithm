/*Program db by Jackie at 8/7/2019/22:01*/
#include <cstdio>
using namespace std;
int n;
int * a; 
int main(void)
{
	scanf("%d",&n);
/*Define pointer variable a, which is used directly after the array name*/
	a=new int[n+1];
//Apply to the operating system for continuous n+1 int shaping space
	for(int i=1;i<=n;i++)
	    scanf("%d",&a[i]);
    for(int i=2;i<=n;i++)
        a[i]+=a[i-1];
    for(int i=1;i<=n;i++)
        printf("%d",a[i]);
    return 0;
}