#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		int a[5],i=0,m;
		while(i<5)
		{
			scanf("%d",&a[i]);
			i++;
		}
		m=a[0];
		i=0;
		
		while(i<5)
		{
			
			
			if(a[i]<m)
			{
				m=a[i];
			}
			i++;
		}
		printf("%d",m);
		
	}
	return 0;
}
