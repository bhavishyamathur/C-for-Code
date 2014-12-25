#include<stdio.h>
int main()
{
	for(int i=3;i>=1;i--)
	{
		for(int j=1;j<=(i-1);j++)
		{
			printf(" ");
		}
		for(int j=3;j>=i;j--)
		{
			printf("%d",j);
		}
		for(int j=i+1;j<=3;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	for(int i=2;i<=3;i++)
	{
		for(int j=2;j<=i;j++)
		{
			printf(" ");
			
		}
		for(int j=3;j>=i;j--)
		{
			printf("%d",j);
		}
		for(int j=3;j>=i+1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
