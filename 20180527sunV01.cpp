#include<iostream>
#include<string>
using namespace std;
struct student{        // 定义一个类型名叫student的struct类型 
	string name;
	int chinese,math;
	int total;
};
student a[110];        //用数组储存student 
int n;                //定义一个 n
int main()
{
	cin>>n;             //输入n 
	for(int i=0;i<n;i++) //对机构体中成员的赋值、取值。 
	{
		cin>>a[i].name;
		cin>>a[i].chinese>>a[i].math;
		a[i].total=a[i].chinese+a[i].math;
	}
	for(int i=n-1;i>0;i--)
	for(int j=0;j<i;j++)
	if(a[j].total<a[j+1].total)
	   swap(a[j],a[j+1]);
	
	for(int i=0; i<n; i++)
	   cout<<a[i].name<<' '<<a[i].chinese<<' '
	   <<a[i].math<<' '<<a[i].total<<endl;
return 0;	
}

