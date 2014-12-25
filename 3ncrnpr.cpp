#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n,r;
	printf("Enter the value of n and r");
	scanf("%d %d",&n,&r);
	int num1=1,num2=1,num3=1;
	if(n==0)
	{
		printf("n cannot be zero");
		
	}
	else
	{
		if(r==0)
		{
			printf("n:%d r:0 nCr: 1 nPr:1",n);
		}
	for(int i=1;i<=r;i++)
	{
		num1=num1*i;
	}
	for(int i=1;i<=n;i++)
	{
		num2=num2*i;
	}
	for(int i=1;i<=(n-r);i++)
	{
		num3=num3*i;
	}

printf("n:%d r:%d nCr:%d nPr:%d",n,r,(num2/(num1*num3)),(num2/num3));

}
system("PAUSE");
return 0;
}
