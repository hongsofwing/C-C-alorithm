/*Programming DB by Jackie at 8/11/2019 21:16*/ 
#include<cstdio>
using namespace std;
struct student
{
	 char name[20];
	 char sex;
	 int  score;
} s[3]={{"xiaoming",'b',100},
        {"xiaogang",'b',98},
        {"xiaohong",'g',95}};
int main(void)
{
	student *p;
	printf("姓名     性别   成绩 \n");
	for(p=s;p<s+3;p++)
	//Copy three student structures in memory space and save them in s[3] 
	printf("%-9s%3c%7d\n",p->name,p->sex,p->score);
	return 0;
	
}
