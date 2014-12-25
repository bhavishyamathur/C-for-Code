#include<stdio.h>
int main()
{
	int a=0;
	printf("Enter a number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a positive number",a);
	}
	else if(a<0)
	{
		printf("%d is a negative number",a);
	}
	else
	{
		printf("The number is 0 which is neutral");
	}
	return 0;
	
}
