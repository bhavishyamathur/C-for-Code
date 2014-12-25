#include<stdio.h>
int main()
{
	struct name
	{
		char fname[10];
		char mname[10];
		char lname[10];
	};
	struct address
	{
		char are[10];
		char cty[10];
		char state[10];
	};
	struct emp
	{
		struct name n;
		struct address a;
		int age;
		int sal;
		char desig[10];
	};
	struct emp b[2];
	for(int i=0;i<2;i++)
	{
		scanf("%s %s %s %s %s %s %d %d %s",&b[i].n.fname,&b[i].n.mname,&b[i].n.lname,&b[i].a.are,&b[i].a.cty,&b[i].a.state,&b[i].age,&b[i].sal,&b[i].desig);
	}
		for(int i=0;i<2;i++)
	{
		scanf("%s %s %s %s %s %s %d %d %s",b[i].n.fname,b[i].n.mname,b[i].n.lname,b[i].a.are,b[i].a.cty,b[i].a.state,b[i].age,b[i].sal,b[i].desig);
	}
	return 0;
}
