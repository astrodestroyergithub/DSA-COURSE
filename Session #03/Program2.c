#include<stdio.h>
#include<stdlib.h>

void SUM(int ** A, int ** B, int R, int C) 
{
	int i,j, ** SUM;
	SUM=(int **)malloc(R*sizeof(int *));
	for(i=0;i<R;i++)
	{
		SUM[i]=(int *)malloc(C*sizeof(int));
	}
	printf("The SUM is:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			SUM[i][j]=A[i][j]+B[i][j];
			printf("%d ",SUM[i][j]);
		}
		printf("\n");
	}
}

int ** DIFFERENCE(int ** A, int ** B, int R, int C)
{
	int i,j, ** DIFF;
	DIFF=(int **)malloc(R*sizeof(int *));
	for(i=0;i<R;i++)
	{
		DIFF[i]=(int *)malloc(C*sizeof(int));
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			DIFF[i][j]=A[i][j]-B[i][j];
		}
	}
	return DIFF;
}

int main() {

  int i,j,ch,R,C, ** A, ** B, ** DIFF;
  
  printf("Enter the number of ROWS and COLUMNS: ");
  scanf("%d%d",&R,&C);
  
  A=(int **)malloc(R*sizeof(int *));
  for(i=0;i<R;i++)
  {
  	A[i]=(int *)malloc(C*sizeof(int));
  }
  
  printf("Enter the ELEMENTS of MATRIX A:\n");
  for(i=0;i<R;i++)
  {
  	for(j=0;j<C;j++)
  	{
  		scanf("%d",(*(A+i)+j));
	}
  }
  
  B=(int **)malloc(R*sizeof(int *));
  for(i=0;i<R;i++)
  {
  	B[i]=(int *)malloc(C*sizeof(int));
  }
  
  printf("Enter the ELEMENTS of MATRIX B:\n");
  for(i=0;i<R;i++)
  {
  	for(j=0;j<C;j++)
  	{
  		scanf("%d",(*(B+i)+j));
	}
  }
  
  printf("1. Matrix Addition\n2. Matrix Subtraction\n3. Exit\n");
  printf("Enter choice: ");
  scanf("%d",&ch);
  
  switch(ch)
  {
	case 1:
  		SUM(A,B,R,C);
  		free(A);free(B);
  	case 2:
  		DIFF=DIFFERENCE(A,B,R,C);
  		printf("The DIFFERENCE is:\n");
  		for(i=0;i<R;i++)
  		{
  			for(j=0;j<C;j++)
  			{
  				printf("%d ",*(*(DIFF+i)+j));
			}
			printf("\n");
		}
		printf("\n");
		free(A);free(B);free(DIFF);
		break;
	case 3:
		exit(0);
		break;
  }
  
  return 0;
}
