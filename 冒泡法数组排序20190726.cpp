#include<iostream>
using namespace std;
void bubble(int[],int);                     //void bubble(int a[],int n);
int main()
{
	int array[10]={11,4,55,6,77,8,9,0,1,7}; //大数组应开为全局变量 
	cout<<"Before:";         //排序前 
	/*打印*/
	for(int i=0;i<10;++i)
        cout<<array[i]<<','; 
        cout<<endl;
        bubble(array,10);
        cout<<"After:";      //排序后 
     for(int i=0;i<10;++i)
        cout<<array[i]<<',';
        cout<<endl;
           return 0;
}
void bubble(int a[],int n)
{
	for(int i=1;i<n;++i)
	{
		for(int j=0;j<n-i;++j) 
		  if(a[j]>a[j+1])    //判断并交换变量 
		  {
  			int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
  		  }
	}
}