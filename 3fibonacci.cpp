#include<stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("Enter the value of num");
	scanf("%d",&num);
	if(num==0)
	{
		printf("number of terms cannot be 0");
	}
	if(num==1)
	{
		printf("0");
	}
	else if(num==2)
	{
		printf("0 \n1");
	}
	else
	{
		printf("0 \n1");
			int a=0,b=1,c1=2,c;
		while(1)
		{
	
		c=a+b;
		printf("\n%d",c);
		c1++;
		if(num==c1)
		{
			break;
		}
		a=b;b=c;
		
		
	}
}
system("PAUSE");
	return 0;

}
