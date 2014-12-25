#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n],b[n],c[2*n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the values of the array a in a sorted manner at the %d position",(i+1));
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("Enter the values of the array b in a sorted manner at the %d position",(i+1));
		scanf("%d",&b[i]);
	}
	int i,j=0,k=0;
	for(i=0;i<n;)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;i++;
		}
		else
		{
			c[k]=b[j];
			k++;j++;
		}
	}
	if(a[4]>b[4])
	{
		c[k]=a[4];
	}
	else
	{
		c[k]=b[4];
	}
	printf("The final array is");
	for(i=0;i<(2*n);i++)
	{
		printf("\n %d",c[i]);
	}
	return 0;
}
	

