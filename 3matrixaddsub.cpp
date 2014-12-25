#include<stdio.h>
#include <stdlib.h>
int main()
{
	int r,c,choice;
	printf("Enter the number of rows and columns of the matrix respectivly");
	scanf("%d %d",&r,&c);
	int mat1[r][c],mat2[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		  printf("Enter the number at %d row and %d column",(i+1),(j+1));
		  scanf("%d",&mat1[i][j]);
		}
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		  printf("Enter the number at %d row and %d column",(i+1),(j+1));
		  scanf("%d",&mat2[i][j]);
		}
	}
	printf("Matrix 1 \n");
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 \n");
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	printf("\n 1.Addition \n2.Subtraction");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			int finmat[r][c];
			for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 finmat[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 printf("%d ",finmat[i][j]);
		}
		printf("\n");
	}
	
	break;
	
	 case 2:
	 		 		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 finmat[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		 printf("%d ",finmat[i][j]);
		}
		printf("\n");
	}
	}
	system("PAUSE");
	return 0;
}
