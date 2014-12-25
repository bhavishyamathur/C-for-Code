#include<stdio.h>
int main()
{
	int c;
	printf("Enter the no of times of input");
	scanf("%d",&c);
    int a=1;
	while(a<=c)
	{
	int t;
	scanf("%d",&t);
	int h=t/3600;
	int r=(t%3600);
	int m=r/60;
	int s=r%60;
	printf("%d %d %d %d\n",t,h,m,s);
	a++;
}
	return 0;
}
