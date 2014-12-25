#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[5],i=0;
		while(i<5)
		{
			scanf("%d",&a[i]);
			i++;
			
		}
		int m=a[0];
		i=0;
		
		while(i<5)
		{
			if(m>a[i])
			{
				m=a[i];
				}
			i++;
		
		}
		printf("%d \n",m);
	}
	return 0;
}
