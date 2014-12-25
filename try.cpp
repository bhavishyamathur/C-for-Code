#include<stdio.h>
#include<string.h>
int main()
{
	char m[7];int t;
	scanf("%d",&t);
	while(t--)
	{
    
	scanf("%s",&m);	

	switch(m[0])
	{
		case 'I':
		{
			int a,j=1;
			scanf("%d",&a);
			long long int p=1;
               for(;j<=a;j++)
               {
                   p=p*j;
                }
                printf("%lld \n",p);
             break;   
		}
		case 'L':
		{
			long long int b;
			int s=0;
			scanf("%lld",&b);
			while(b!=0)
               {
                  s=s+(b%10);
                  b=b/10;
                }
                printf("%d \n",s);
                break;
                
		}
		case 'S':
		{
			char c[100]; int j;
			scanf("%s",&c);
			for(j=strlen(c)-1;j>=0;j--)
			{
				printf("%c",c[j]);
			}
			printf("\n");
			break;
			
			
		}
		case 'D':
		{
			double d;
			scanf("%lf",&d);
			printf("%d \n",(int)(d));
			break;
			
		}
	}
	}
	return 0;
	
}
