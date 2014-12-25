#include<stdio.h>
#include<string.h>
int main()
{
	struct name
	{
		char fname[20];
		char mname[20];
		char lname[20];
	};
	struct marks
	{
		int eng;
		int mat;
		int cs;
	};
	struct student
	{
		int roll;
		struct name n;
		char dob[10];
		struct marks m;
		float per;
		char g;
	};
	int n;
	printf("Enter the number of students whose data is to be analysed");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{   
	    printf("Enter the first name,middle name and last name of student %d",(i+1));
	    scanf("%s %s %s",&s[i].n.fname,&s[i].n.mname,&s[i].n.lname);
		printf("Enter the roll number and date of birth of student %d",(i+1));
		scanf("%d %s",&s[i].roll,&s[i].dob);
		printf("Enter the marks of the student %d in english,maths and computer science respectively",(i+1));
		scanf("%d %d %d",&s[i].m.eng,&s[i].m.mat,&s[i].m.cs);
	}
	
	for(int i=0;i<n;i++)
	{
	  s[i].per=(s[i].m.eng+s[i].m.mat+s[i].m.cs)/3.0	;
	  if(s[i].per>=75)
	  {
	  	s[i].g='A';
	  }
	  else if(s[i].per>=60 && s[i].per<75)
	  {
	  	s[i].g='B';
	  }
	  else if(s[i].per>=45 && s[i].per<60)
	  {
	  	s[i].g='c';
	  }
	  else if(s[i].per>=35 && s[i].per<45)
	  {
	  	s[i].g='D';
	  }
	  else
	  {
	  	s[i].g='F';
	  }
	}
	char dobu[20],lnameu[20];
	printf("Enter the date of birth");
	scanf("%s",&dobu);
	printf("Enter the last name of a student");
	scanf("%s",&lnameu);
	for(int i=0;i<n;i++)
	{
		if(s[i].per<40)
		{printf("Students with less than 40% \n");
		printf("Student %d \n",(i+1));
		printf("First name:%s Middle name:%s Last name:%s \n",s[i].n.fname,s[i].n.mname,s[i].n.lname);
		printf("Date of birth:%s Roll no:%d \n",s[i].dob,s[i].roll);
		printf("English marks:%d Mathematics marks:%d Computer Science:%d \n",s[i].m.eng,s[i].m.mat,s[i].m.cs);
		printf("Percentage:%f Grade:%c \n",s[i].per,s[i].g);
	   }
	   if(strcmp(dobu,s[i].dob)==0)
	   {
	   	printf("Students with date of birth %s \n",&dobu);
	    printf("Student %d \n",(i+1));
		printf("First name:%s Middle name:%s Last name:%s \n",s[i].n.fname,s[i].n.mname,s[i].n.lname);
		printf("Date of birth:%s Roll no:%d \n",s[i].dob,s[i].roll);
		printf("English marks:%d Mathematics marks:%d Computer Science:%d \n",s[i].m.eng,s[i].m.mat,s[i].m.cs);
		printf("Percentage:%f Grade:%c \n",s[i].per,s[i].g);
	   }
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(lnameu,s[i].n.lname)==0)
		{
			for(int j=i;j<n;j++)
			{
				s[j]=s[j+1];
			}
			c++;
		}
	}
	for(int i=0;i<(n-c);i++)
	{
		printf("Students excluding the last name %s \n",lnameu);
		printf("Student %d \n",(i+1));
		printf("First name:%s Middle name:%s Last name:%s \n",s[i].n.fname,s[i].n.mname,s[i].n.lname);
		printf("Date of birth:%s Roll no:%d \n",s[i].dob,s[i].roll);
		printf("English marks:%d Mathematics marks:%d Computer Science:%d \n",s[i].m.eng,s[i].m.mat,s[i].m.cs);
		printf("Percentage:%f Grade:%c \n",s[i].per,s[i].g);
	}
	
	return 0;
}
