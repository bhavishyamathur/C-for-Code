#include<stdio.h>1 

int main()
{
	int n1,n2;
	printf("Enter two numbers");
	scanf("%d %d",&n1,&n2);
	int max,min,r;
	if(n1>n2)
	{
		max=n1;
		min=n2;
	}
	else
	{
		max=n2;
		min=n1;
		
	}
	while(1)
	{
		r=max%min;
		if(r==0)
		{
			printf("HCF=%d",min);
			break;
			
		}
		max=min;
		min=r;
	}
	int lcm=(n1*n2)/min;
	printf("LCM=%d",lcm);	
	return 0;
}
