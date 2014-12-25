#include<stdio.h>
int main()
{
	int c=0,a=0;
	char ch[10];
	scanf("%s",ch);
	for(int i=0;i<10;i++)
	{
		if(ch[i]=='\0')
		break;
		c++;
		
	}
	for(int i=0,j=c-1;i<c;i++,j--)
	{
		if(ch[i]==ch[j])
		a=1;
		
	}
	if(a==1)printf("palindrome");
	else printf("not palindrome");
	return 0;
}
