/*Program db by Jackie at 7/30 2019 21:53*/
#include<iostream>
#include<string>
using namespace std;
struct student{        
	string name;
	int chinese,math;
	int total;
};
/*Define a struct type called student */
student a[110];  
/*Define an array a, each of which is a student type .
Memory allocation 110 students*/
int n;
int main()
{
	cin>>n;
	    for(int i=0;i<n;i++)
    /*Value assignment of members in a structure */
	{
		cin>>a[i].name;
		cin>>a[i].chinese>>a[i].math;
		a[i].total=a[i].chinese+a[i].math;
	}
	/*Start bubbling*/
	for(int i=n-1;i>0;i--)
{
	for(int j=0;j<i;j++)
	{
	    if(a[j].total<a[j+1].total)
	         swap(a[j],a[j+1]);
	}
}
     for(int i=0;i<n;i++)    //Output
     {
        cout<<a[i].name<<' ';
        cout<<a[i].chinese<<' ';
        cout<<a[i].math<<' ';
        cout<<a[i].total<<endl;
     }
     
     return 0;	         
}
