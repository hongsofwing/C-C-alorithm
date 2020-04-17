/*Programming DB by Jackie at 20180815 21:37*/
/*Programming and modification DB  by Jackie at 20190814  8:31*/
#include"iostream"
#include"cstdio"
#include"cstring"
using namespace std;
int main(void)
{
	int a[256],b[256],c[256],lena,lenb,lenc,i;
	char n[256],n1[256],n2[256];
	/*
	void *memset(void *s, int ch, size_t n);
    函数解释：将s中当前位置后面的n个字节 （typedef unsigned int size_t ）用 ch 替换并返回 s。
    memset：作用是在一段内存块中填充某个给定的值，它是对较大的结构体或数组进行清零操作的一种最快方法。
    memset()函数原型是extern void *memset(void *buffer, int c, int count) buffer：为指针或是数组,c:是赋给buffer的值,count：是buffer的长度.
	*/
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	printf("Input minuend:"); gets(n1);  //Inerput minuend;
	printf("Input subtranhend:");gets(n2);//Inerpit reduction;
	/*
    strlen所作的仅仅是一个计数器的工作，它从内存的某个位置（可以是字符串开头，中间某个位置，
    甚至是某个不确定的内存区域）开始扫描，直到碰到第一个字符串结束符'\0'为止，然后返回计数器值(长度不包含'\0')。 
    */
	/*strcmp函数是string compare(字符串比较)的缩写，用于比较两个字符串并根据比较结果返回整数。基本形式为strcmp(str1,str2)，
	若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。*/
	
	/*extern int strcmp(const char *s1,const char *s2);*/
	
	if(strlen(n1)<strlen(n2)||strlen(n1)==strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0)	
    {
    //The strcmp()is that String Comparison Function ，when n1==n2,return value=1; 
	//When n1>n2 ,return +; else ,return -;
    /* Processing subtracted and subtracted, swapping subtracted and subtracted;*/
    //subtracted=minuend,reduction;
    /*
	  原型声明：char *strcpy(char* dest, const char *src);
      头文件：#include <string.h> 和 #include <stdio.h>
      功能：把从src地址开始且含有NULL结束符的字符串复制到以dest开始的地址空间
      说明：src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
      返回指向dest的指针。
	*/
 	strcpy(n,n1); //n=n1;
 	strcpy(n1,n2);
 	strcpy(n2,n);
 	cout<<"-";   //change reduction and minuend,The result is negative;
    }
    lena=strlen(n1);lenb=strlen(n2);
    for(i=0;i<=lena-1;i++)a[lena-i]=int(n1[i]-'0');
    for(i=0;i<=lenb-1;i++)a[lenb-i]=int(n2[i]-'0');
    i=1;
    while(i<=lena||i<=lenb)
    {
      if(a[i]<b[i])
      {
    	a[i]+=10;//Not enough to reduce, then borrow one from a high position when 10;
    	a[i+1]--;  	
      }
    c[i]=a[i]-b[i];//Corresponding phase subtraction 
    i++;
    }
    lenc=i;
    while((c[lenc]==0)&&(lenc>1))lenc--;//The highest bit 0 does not output;
    for(i=lenc;i>=1;i--)cout<<c[i];     //Output result;
    cout<<endl;
    return 0;
}
