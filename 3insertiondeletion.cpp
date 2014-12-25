#include<stdio.h>
int main()
{
	int n,ch;
	printf("Enter the value of the size of the array");
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		printf("Enter the value at position %d",(i+1));
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n1.insertion 2.deletion");
	scanf("%d",&ch);
	switch(ch)
	{
	
	case 1:
	int p,m;
	printf("Enter the position and the number which is to be inserted");
	scanf("%d %d",&p,&m);
	for(int i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	
	a[p-1]=m;
	
	for(int i=0;i<=n;i++)
	{
		printf(" %d",a[i]);
	}
	break;
	case 2:
	int q;
	printf("Enter the position at which the number is to be deleted");
	scanf("%d",&q);
	
	
	for(int i=q-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	
	for(int i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
}
return 0;
}

