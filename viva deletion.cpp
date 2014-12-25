#include<stdio.h>
int main()
{
	int a[7]={2,3,4,5,67,67,89};
	int p=3,n=7;
	for(int i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(int i=0;i<(n-1);i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
