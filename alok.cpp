#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int a[m];
	int i=0;
	while(i<m)
	{
		a[i]=0;
		i++;
	}
	while(n--)
	{
		int x,y,k;
		scanf("%d %d %d",&x,&y,&k);
		int j=x;
		while(j<=y)
		{
			a[j]=a[j]+k;
			j++;
		}
		
		
	}
	i=0;
	while(i<m)
	{
		printf("%d \n",a[i]);
		i++;
	}
	
	return 0;
}
