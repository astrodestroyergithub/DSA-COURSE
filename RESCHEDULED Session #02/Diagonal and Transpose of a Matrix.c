#include<stdlib.h>
#include<stdio.h>

void diagonals(int ** A, int R)
{
	int i,j;
	printf("The LEFT diagonal is:\n");
	for(i=0;i<R;i++)
	{
		printf("%d ",*(*(A+i)+i));
	}
	printf("\n");
	printf("The RIGHT diagonal is:\n");
	for(i=0;i<R;i++)
	{
		printf("%d ",*(*(A+i)+(R-i-1)));
	}
	printf("\n");
}

int ** transpose(int ** A, int R, int C)
{
	int ** B,i,j;
	B=(int **)malloc(R*sizeof(int *));
	for(i=0;i<R;i++)
	{
		B[i]=(int *)malloc(C*sizeof(int));
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			B[j][i]=A[i][j];
		}
	}
	return B;
}

int main()
{
	int i,j;
	int ** A, ** B,R,C;
	char ch;
	
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&R,&C);
	
	A=(int **)malloc(R*sizeof(int *));
	for(i=0;i<R;i++)
	{
		A[i]=(int *)malloc(C*sizeof(int));
	}
	
	printf("Enter the elements row wise:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",(*(A+i)+j));
		}
	}
	
	printf("a. Print Diagonal\nb. Print Transpose\nc. Exit\n");
	printf("Enter choice: ");
	scanf("\n%c",&ch);
	
	switch(ch)
	{
		case 'a':
			diagonals(A,R);
			free(A);free(B);
			break;
		case 'b':
			B=transpose(A,R,C);
			printf("The transpose of the matrix is:\n");
			for(i=0;i<R;i++)
			{
				for(j=0;j<C;j++)
				{
					printf("%d ",*(*(B+i)+j));
				}
				printf("\n");
			}
			free(A);free(B);
			break;
		case 'c':
			free(A);free(B);
			exit(0);
			break;
	}
	
	return 0;
}
