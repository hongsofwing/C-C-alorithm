#include<iostream>
#include<cstdio>
using namespace std;
struct	Data1  	
{	     
	int a;
	char b;
	double c;
}; 

Data1 d1;
Data1 d2;

struct Data2
{
 char array[10];
 int a;
 char b;
};
Data2 wsw;

int main()
{
   

    d1.a=1000;
	d1.b=0;
    d1.c=0.01;
    cout<<d1.a<<endl;
	cout<<d1.b<<endl;
	cout<<d1.c<<endl;
	
	d2.a=999;
    cout<<d2.a<<endl; 	


    return 0;
}