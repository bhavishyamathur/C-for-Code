#include<stdio.h>
int main()
{
	int k=5;
	int a[6]={1,3,6,7,4,11};
	int n=25,p=3;
	for(int i=k;i>=p;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=n;
	for(int i=0;i<=k;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
