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
    �������ͣ���s�е�ǰλ�ú����n���ֽ� ��typedef unsigned int size_t ���� ch �滻������ s��
    memset����������һ���ڴ�������ĳ��������ֵ�����ǶԽϴ�Ľṹ�������������������һ����췽����
    memset()����ԭ����extern void *memset(void *buffer, int c, int count) buffer��Ϊָ���������,c:�Ǹ���buffer��ֵ,count����buffer�ĳ���.
	*/
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	printf("Input minuend:"); gets(n1);  //Inerput minuend;
	printf("Input subtranhend:");gets(n2);//Inerpit reduction;
	/*
    strlen�����Ľ�����һ���������Ĺ����������ڴ��ĳ��λ�ã��������ַ�����ͷ���м�ĳ��λ�ã�
    ������ĳ����ȷ�����ڴ����򣩿�ʼɨ�裬ֱ��������һ���ַ���������'\0'Ϊֹ��Ȼ�󷵻ؼ�����ֵ(���Ȳ�����'\0')�� 
    */
	/*strcmp������string compare(�ַ����Ƚ�)����д�����ڱȽ������ַ��������ݱȽϽ������������������ʽΪstrcmp(str1,str2)��
	��str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�������*/
	
	/*extern int strcmp(const char *s1,const char *s2);*/
	
	if(strlen(n1)<strlen(n2)||strlen(n1)==strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0)	
    {
    //The strcmp()is that String Comparison Function ��when n1==n2,return value=1; 
	//When n1>n2 ,return +; else ,return -;
    /* Processing subtracted and subtracted, swapping subtracted and subtracted;*/
    //subtracted=minuend,reduction;
    /*
	  ԭ��������char *strcpy(char* dest, const char *src);
      ͷ�ļ���#include <string.h> �� #include <stdio.h>
      ���ܣ��Ѵ�src��ַ��ʼ�Һ���NULL���������ַ������Ƶ���dest��ʼ�ĵ�ַ�ռ�
      ˵����src��dest��ָ�ڴ����򲻿����ص���dest�������㹻�Ŀռ�������src���ַ�����
      ����ָ��dest��ָ�롣
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
