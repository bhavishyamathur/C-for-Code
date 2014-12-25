#include<stdio.h>
int main()
{
	int ch;
	printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Transpose");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
          {
			int a,b;
			printf("Enter the number of rows and columns of the matrix");
			scanf("%d %d",&a,&b);
			int c[a][b],d[a][b],e[a][b];
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix c",i+1,j+1);
				scanf("%d",&c[i][j]);
		    	}
			}
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix d",i+1,j+1);
				scanf("%d",&d[i][j]);
		    	}
			}
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				 e[i][j]=c[i][j]+d[i][j];
		    	}
			}
			printf("The final matrix is \n");
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				 printf("%d ",e[i][j]);
		    	}
		    	printf("\n");
			}
			break;
		}
		case 2:
			{		
			int a,b;
			printf("Enter the number of rows and columns of the matrix");
			scanf("%d %d",&a,&b);
			int c[a][b],d[a][b],e[a][b];
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix c",i+1,j+1);
				scanf("%d",&c[i][j]);
		    	}
			}
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix d",i+1,j+1);
				scanf("%d",&d[i][j]);
		    	}
			}
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				 e[i][j]=c[i][j]-d[i][j];
		    	}
			}
			printf("The final matrix is \n");
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				 printf("%d ",e[i][j]);
		    	}
		    	printf("\n");
			}
			break;
		}
		case 3:
		{
			int a,b,f;
			printf("Enter the number of rows and columns of the matrix c");
			scanf("%d %d",&a,&b);
			printf("Enter the number of columns of the matrix d");
			scanf("%d",&f);
			int c[a][b],d[b][f],e[a][f];
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix c",i+1,j+1);
				scanf("%d",&c[i][j]);
		    	}
			}
			for(int i=0;i<b;i++)
			{ 
				for(int j=0;j<f;j++)
				{
				printf("Enter the element at %d row and %d column of matrix d",i+1,j+1);
				scanf("%d",&d[i][j]);
		    	}
			}
			for(int p=0;p<a;p++)
			{
				for(int q=0;q<f;q++)
				{      
				e[p][q]=0;
				for(int i=0;i<b;i++)
				{
					e[p][q]=e[p][q]+(c[p][i]*d[i][q]);
				}
			   }
			}
			printf("The final matrix is \n");
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<f;j++)
				{
				 printf("%d ",e[i][j]);
		    	}
		    	printf("\n");
			}
			break;
	   }
		case 4:
	    {
	  			int a,b;
			printf("Enter the number of rows and columns of the matrix");
			scanf("%d %d",&a,&b);
			int c[a][b],d[b][a];
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				printf("Enter the element at %d row and %d column of matrix c",i+1,j+1);
				scanf("%d",&c[i][j]);
		    	}
			}
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
				 d[j][i]=c[i][j];
		    	}
			}
			for(int i=0;i<b;i++)
			{
				for(int j=0;j<a;j++)
				{
				 printf("%d ",d[i][j]);
		    	}
		    	printf("\n");
			}
			break;
	   }
		default:
			printf("Wrong choice entered");
	}
	return 0;
}
