#include<stdio.h>
struct stud
{
	int sno;
	char sname[20];
	
};
int main()
{
	struct stud s;
	printf("enter number and name of the student:");
	scanf("%d%s",&s.sno,&s.sname);
	printf("number:%d name:%s",s.sno,s.sname);
	return 0;

}
