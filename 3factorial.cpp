#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("The factorial of 0 is 0");
	}
	else
	{
		int p=1;
		for(int i=1;i<=n;i++)
		p=p*i;
		printf("The factorial of %d is %d",n,p);
	}
	return 0;
}
