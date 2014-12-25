#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	int i,b,j,temp;
	for(i=0;i<n;i++)
	{
		printf("Enter the value of the element at the %d position in the array in a sorted manner",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be found");
	scanf("%d",&b);
	int c=0,lower=0,upper=n-1,mid;
	while(lower<=upper)
	{
		mid=(int)((lower+upper)/2);
		if(a[mid]==b)
		{
			c=1;
			printf("%d is found at %d position",b,(mid+1));
			break;
		}
		else if(b>a[mid])
		{
			lower=mid+1;
		}
		else if(b<a[mid])
		{
			upper=mid-1;
		}
	}
	if(c==0)
	{
		printf("%d is not found in the array",b);
	}
return 0;
}

