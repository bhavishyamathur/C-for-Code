#include<stdio.h>

int main()
{
	int n;
	int a;
	int r;int c;int n1,n2,n3,n4;
	do
	{
	printf("Enter a number between one to thousand");
	scanf("%d",&n);
	if(n>=1 && n<=1000)
	{
	break;
    }
    else
    {
    	printf("Wrong choice entered \n");
    }
   }while(1);
	a=n;
	r=0;c=0;
	for( ;n!=0; )
	{
		c++;
		r=n%10;
		if(c==1)
		{
		n1=r;	
		}
		if(c==2)
		{
		 n2=r;	
		}
		if(c==3)
		{
			n3=r;
		}
		if(c==4)
		{
			n4=r;
		}
		n=n/10;
	}
	
	printf("The equivalent roman number of %d is ",a);
	
if(n4==1)
{
	printf("M");
}	

else
{
	
	if(n3==1)
	{
		printf("C");
		}
	else if(n3==2)
	{
		printf("CC");
	}
    else if(n3==3)
	{
	    printf("CCC");
	}
	else if(n3==4)
	{
		printf("CD");
	}
	else if(n3==5)
	{
	printf("D");
    }
    else if(n3==6)
	{
		printf("DC");
	}
	else if(n3==7)
	{
		printf("DCC");
	}
	else if(n3==8)
	{
		printf("DCCC");
	}
	else if(n3==9)
	{
		printf("CM");
	}
	 if(n2==1)
	{
		printf("X");
	}
	else if(n2==2)
	{
		printf("XX");
	}
	 else if(n2==3)
	{
		printf("XXX");
	}
	 else if(n2==4)
	{
		printf("XL");
	}
	 else if(n2==5)
	{
		printf("L");
	}
	 else if(n2==6)
	{
		printf("LX");
	}
	 else if(n2==7)
	{
		printf("LXX");
	}
	 else if(n2==8)
	{
		printf("LXXX");
	}
	 else if(n2==9)
	{
		printf("XC");
	}
	if(n1==1)
	{
		printf("I");
	}
    else if(n1==2)
	{
		printf("II");
	}
		else if(n1==3)
	{
		printf("III");
	}
		else if(n1==4)
	{
		printf("IV");
	}
		else if(n1==5)
	{
		printf("V");
	}
		else if(n1==6)
	{
		printf("VI");
	}
		else if(n1==7)
	{
		printf("VII");
	}
		else if(n1==8)
	{
		printf("VIII");
	}
		else if(n1==9)
	{
		printf("IX");
	}
}

return 0;	
}
