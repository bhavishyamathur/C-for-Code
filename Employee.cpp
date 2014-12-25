#include<stdio.h>
int main()
{
		struct name
	{
		char fname[20];
		char mname[20];
		char lname[20];
	};
	struct address
	{
		char area[20];
		char city[20];
		char state[20];
	};
	struct Employee
	{
		struct name n;
		struct address a;
		float sal;
		int age;
		char desig[20];
	};
	struct Employee e[10];
	for(int i=0;i<2;i++)
	{
		printf("Enter the first name,middle name and last name of the employee %d",(i+1));
		scanf("%s %s %s",&e[i].n.fname,&e[i].n.mname,&e[i].n.lname);
		printf("Enter the area ,city and the state where the employee %d is residing",(i+1));
		scanf("%s %s %s",&e[i].a.area,&e[i].a.city,&e[i].a.state);
		printf("Enter the age,salary and designation of the employee %d",(i+1));
		scanf("%d %f %s",&e[i].age,&e[i].sal,&e[i].desig);
	}
	for(int i=0;i<2;i++)
	{
		printf("Employee %d\n",(i+1));
		printf("First name:%s Middle name:%s Last name:%s \n",e[i].n.fname,e[i].n.mname,e[i].n.lname);
		printf("Area:%s City:%s State:%s \n",e[i].a.area,e[i].a.city,e[i].a.state);
		printf("Age:%d Salary:%f Designation:%s \n ",e[i].age,e[i].sal,e[i].desig);
		
	}
	return 0;
	
}
