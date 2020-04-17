#include<iostream>
#include<windows.h>


int main()
{
   using namespace std;
////////////////////////////////////////////////////
   char Cycle1;  
   char Cycle2;  
   char Cycle3;
   char Cycle4;
   char Cycle5;
   int a=20141113;

//////////////////////////////////////////////////

    for(Cycle1=0;Cycle1<=100;Cycle1++)
    {
     cout<<"Micorsoft copration:"<<" Under loading..."<<" "<<"Please wait... \n";    
    }
    for(Cycle2=0;Cycle2<=10;Cycle2++)
    {
      cout<<"$Compling progrom...\n ";
    }
    for(Cycle3=0;Cycle3<=5;Cycle3++)
    {
     cout<<"$Sorry, compilation failed!\n ";
    }
    for(Cycle4=7;Cycle4>=0;Cycle4--)
    {
    cout<<"$Reconnecting"<<"["<<Cycle4<<"]"<<"\n";	
    } 
    cout<<"welcom using this program!\a\n";
    cout<<"//////////////////////////////////////\n";
    cout<<"请输入您的密匙进行登录用户！\n";
    cout<<"//////////////////////////////////////\n";
    cin>>a;
    if(a='20041113')
    {
    	cout<<"Well come";
    }
    
    return 0;
}
