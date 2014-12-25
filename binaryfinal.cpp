#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,d1,d,s=0,s1=0,r1,a;
	printf("Enter the number");
	scanf("%d",&n);a=n;
	while(n!=0)
	{
		r=n%2;
		s=s*10+r;
		n=n/2;
	}
	printf("%d \n",s);
	
		
		d=(int)(log2(a))+1;
	
	
printf("%d \n",d);
	d1=0;
	while(s!=0)
	{
		r1=s%10;
		s1=s1*10+r1;d1++;
		s=s/10;
	}
	printf("%d \n",s1);
		
		
			printf("%d \n",d1);
			int m,y;
			y=d-d1;
	if(d==d1)
	{
		printf("%d",s1);
	}
	else
	{
		m=pow(10,y);
		printf("%d \n",m);
		printf("%d",(s1*m));
	}
	return 0;
}
