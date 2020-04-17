/*Program db by Jackie at 8/1/2019 22:25*/
/*(C)Copyright GNU Compiler Collection 1983-2019*/
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int data;  //numerical value 数值
    int rank;  //ranking 排名
    int index; //indexing 下标
};             //Define structural types
node a[10001];
int n;
bool comp1(node x,node y)
{
  return x.data<y.data;  //if x.data<y.data return comp1
}                //Custom comparison function 自定义比较函数
bool comp2(node x,node y)
{
  return x.index<y.index;
}                //Ditto 
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
cin>>a[i].data,a[i].index=i;
sort(a+1,a+1+n,comp1);        //Rank by value.
for(int i=1;i<=n;i++)a[i].rank=i;
sort(a+1,a+1+n,comp2);        //Rank by Index,then return before
for(int i=1;i<=n;i++)
cout<<a[i].rank<<' ';
return 0;
/*  void sort (first, last);  
---其中first是未排序数组的第一个元素，last是未排序数组的最后一个元素。默认以递增的顺序排序。
一般形式
 void sort ( first, last,  comp)-----多了一个比较函数
*/
}
