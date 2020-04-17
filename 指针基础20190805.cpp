#include "iostream"
#include "stdio.h"
int i=9,i2=8,i3=7,j;
int * pa;
using namespace std;
int main()
{



	  printf("%d",i);
	  printf("%d",i2);
	  printf("%d",i3);
	  pa=&i;

    for(j=9;j>=7;j--)
     {  
	  cin>>*pa;  //Enter a number
	  pa++;      //point ++ to next data location
	 }
	  printf("%d",i);
	  printf("%d",i2);
	  printf("%d",i3);
  
    return 0;	
}

