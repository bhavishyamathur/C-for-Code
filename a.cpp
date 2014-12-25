#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	scanf("%s",a);
	strcpy(b,a);
	printf("%s",strrev(a));	
	int j=strcmp(a,b);
	if(j==0)
	{
		printf("Palindrome");
	}

	return 0;
}
