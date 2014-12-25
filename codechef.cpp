#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		int x[t][n],y[t][n],i=0,j=0;	
		while(n--)
		{
		
			scanf("%d  %d",&x[i][j],&y[i][j]);
			i++;j++;
			
		}
		
		
	}
	int c1=0,c2=0,,i=0,j=0;
	while(j<=t)
	{
	while(i<n-2)
	{
		c1++;
		double m1=(y[i+2][j]-y[i+1][j])/(x[i+2][j]-x[i+1][j]);
		double m2=(y[i+2][j]-y[i][j])/(x[i+2][j]-x[][j]);
		if(m1!=m2)
		{
			double f,g,c,a;
			f=;
			g=;
			c=;
			a=
		}
		
	}
}
