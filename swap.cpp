#include<stdio.h>
int main()
{
	int m=0,n=0;
	
	printf("Enter the value of m");
	scanf("%d",&m);
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("The value of m is %d and value of n is %d",m,n);
	m=m+n;
	n=m-n;
	m=m-n;
	printf("\n The value of m is %d and value of n is %d",m,n);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	

