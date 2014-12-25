#include<stdio.h>
#include<math.h>
int main()
{
 int n,r,c=0;float s=0;
 scanf("%d",&n);
 while(n!=0)
 {
 	r=n%10;
 	s=s+((r+1)*pow(10,c));
	 c++;
 	n=n/10;
 }
 printf("%f",(s));
 return 0;
}

