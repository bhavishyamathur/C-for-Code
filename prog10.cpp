#include<stdio.h>
int main()
{
	int n;char ch='\0';
	do
	{
		n=0;ch='n';
		printf("Enter a number");
		scanf("%d",&n);
		printf("Do u want to enter more numbers?");
		scanf("%c",&ch);
		if(ch=='n')
		{
		 break;
		}
		
	}while(1);
	return 0;
}
