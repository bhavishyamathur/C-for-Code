#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter the value of the strings");
	scanf("%s",s1);
	char a[20];
	strcpy(a,s1);
	int j=strcmp(a,strrev(s1));
	if(j==0)
	{
		printf("\n %s is a palindrome",strrev(s1));
		
	}
	else
	{
		printf("\n %s is not a palindrome",strrev(s1));
	}
system("PAUSE");
return 0;
}

