#include<iostream>
#include<string>
using namespace std;
struct student{        // ����һ����������student��struct���� 
	string name;
	int chinese,math;
	int total;
};
student a[110];        //�����鴢��student 
int n;                //����һ�� n
int main()
{
	cin>>n;             //����n 
	for(int i=0;i<n;i++) //�Ի������г�Ա�ĸ�ֵ��ȡֵ�� 
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

