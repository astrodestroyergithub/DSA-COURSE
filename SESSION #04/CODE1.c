#include<stdio.h>
#include<stdlib.h>

void INNER_SHELL(int ** A, int R, int C)
{
	int i,j;
	printf("\nThe INNER SHELL is:\n");
	for(i=1;i<R-1;i++)
	{
		for(j=1;j<C-1;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void OUTER_SHELL(int ** A, int R, int C)
{
	int i,j;
	printf("\nThe OUTER SHELL is:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if((i==0 || i==R-1) || (j==0 || j==C-1))
			{
				printf("%d ",A[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int i,j,R,C, ** A;
	
	printf("Enter the NUMBER of ROWS and COLUMNS: ");
	scanf("%d%d",&R,&C);
	
	printf("\n");
	
	A=(int **)malloc(R*sizeof(int *));
	for(i=0;i<R;i++)
	{
		A[i]=(int *)malloc(C*sizeof(int));
	}
	
	printf("Enter the ELEMENTS of MATRIX:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",(*(A+i)+j));
		}
	}
	
	INNER_SHELL(A,R,C);
	
	OUTER_SHELL(A,R,C);
	
	return 0;
}
