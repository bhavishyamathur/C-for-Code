#include<stdio.h>
void fib(int,int);
int n;
int main()
{
	scanf("%d",&n);
	if(n==1) printf("0");
	else if(n==2) printf("0 \n1");
	else
	{
		printf("0 \n1 \n");
	    fib(0,1);
    }
	return 0;
}
void fib(int a,int b)
{
	int c1=2,c;
	while(n-2)
	{
		c=a+b;
	printf("%d \n",c);
	n--;
	
	 fib(b,c);
}
}
