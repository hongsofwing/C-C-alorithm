/*Program db by Jackie at 8/1/2019 22:25*/
/*(C)Copyright GNU Compiler Collection 1983-2019*/
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int data;  //numerical value ��ֵ
    int rank;  //ranking ����
    int index; //indexing �±�
};             //Define structural types
node a[10001];
int n;
bool comp1(node x,node y)
{
  return x.data<y.data;  //if x.data<y.data return comp1
}                //Custom comparison function �Զ���ȽϺ���
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
---����first��δ��������ĵ�һ��Ԫ�أ�last��δ������������һ��Ԫ�ء�Ĭ���Ե�����˳������
һ����ʽ
 void sort ( first, last,  comp)-----����һ���ȽϺ���
*/
}
