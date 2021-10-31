#include<stdio.h>
#include<stdlib.h>

void PRINT_SPIRAL(int ** A, int R, int C)
{
	int i,j,i1=0,j1=0,i2=R-1,j2=C-1;
	printf("The SPIRAL formed is: ");
	while(i1<R/2 || j1<C/2 || i2>=R/2 || j2>=C/2) 
	{
		for(j=j1;j<=j2;j++)
		{
			printf("%d ",*(*(A+i1)+j));
		}
		i1++;
		for(i=i1;i<=i2;i++)
		{
			printf("%d ",*(*(A+i)+j2));
		}
		j2--;
		for(j=j2;j>=j1;j--)
		{
			printf("%d ",*(*(A+i2)+j));
		}
		i2--;
		for(i=i2;i>=i1;i--)
		{
			printf("%d ",*(*(A+i)+j1));
		}
		j1++;
	}
}

int main() {

  int i,j,R,C, ** A;
  
  printf("Enter the NUMBER of ROWS and COLUMNS: ");
  scanf("%d%d",&R,&C);
  
  A=(int **)malloc(R*sizeof(int *));
  for(i=0;i<R;i++)
  {
  	A[i]=(int *)malloc(C*sizeof(int));
  }
  
  printf("Enter the ELEMENTS of the MATRIX:\n");
  for(i=0;i<R;i++)
  {
  	for(j=0;j<C;j++)
  	{
  		scanf("%d",(*(A+i)+j));	
	}
  }
  
  PRINT_SPIRAL(A,R,C);
  
  return 0;
}
