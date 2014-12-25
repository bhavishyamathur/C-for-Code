#include<stdio.h>
int main()
{
	int n,q;
	scanf("%d %d",&n,&q);
	char a[n][20];
	int i=0;
	while(i<n)
	{
		scanf("%s",&a[i]);
		i++;
	}
	char b[6];
	while(q--)
	{
		scanf("%s",&b);
		switch(b[0])
	    {
	    	case 'A':
	    		int m;
	    		scanf("%d",&m);
	    		printf("%s \n",a[m-1]);
	    		break;
	    		
	    	case 'S':
	    		int p,n;
	    		scanf("%d %d",&p,&n);
	    		char z[1][20];
	    		z[0][20]=a[p-1][20];
	    		a[p-1][20]=a[n-1][20];
	    		a[n-1][20]=z[0][20];
	    		break;
	    		
	    }
	}
	return 0;
}
