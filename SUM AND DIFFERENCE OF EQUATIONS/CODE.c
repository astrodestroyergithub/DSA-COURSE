#include<stdlib.h>
#include<stdio.h>

int * SUM_OF_EQUATIONS(int ** A, int N, int M)
{
	int i,j, * SUM;
	SUM=(int *)malloc(M*sizeof(int));
	for(i=0;i<M;i++)
	{
		*(SUM+i)=0;
		for(j=0;j<N;j++)
		{
			*(SUM+i)+=*(*(A+j)+i);
		}
	}
	return SUM;
}

int * DIFFERENCE_OF_EQUATIONS(int ** A, int N, int M)
{
	int i,j, * DIFFERENCE;
	DIFFERENCE=(int *)malloc(M*sizeof(int));
	for(i=0;i<M;i++)
	{
		*(DIFFERENCE+i)=*(*(A+0)+i);
	}
	for(i=0;i<M;i++)
	{
		for(j=1;j<N;j++)
		{
			*(DIFFERENCE+i)-=*(*(A+j)+i);
		}
	}
	return DIFFERENCE;
}

int main()
{
	int i,j,N,M, ** A, * SUM, * DIFFERENCE;
	
	printf("How many equations? ");
	scanf("%d",&N);
	
	printf("Maximum degree? ");
	scanf("%d",&M);
	
	A=(int **)malloc(N*sizeof(int *));
	for(i=0;i<N;i++)
	{
		A[i]=(int *)malloc(M*sizeof(int));
	}
	
	SUM=(int *)malloc(M*sizeof(int));
	
	DIFFERENCE=(int *)malloc(M*sizeof(int));
	
	for(i=0;i<N;i++)
	{
		printf("Equation %d:\n",i+1);
		for(j=M-1;j>=0;j--)
		{
			printf("Coefficient of Power %d -> ",j);
			scanf("%d",(*(A+i)+j));	
		}
	}
	
	SUM=SUM_OF_EQUATIONS(A,N,M);
	
	printf("The SUM of the EQUATIONS is: ");
	for(i=0;i<M;i++)
	{
		if(i==0)
		{
			printf("%d",SUM[i]);
		}
		else if(i==1)
		{
			if(SUM[i]>0)
			{
				printf("+%dx",SUM[i]);	
			}
			else if(SUM[i]<0)
			{
				printf("%dx",SUM[i]);
			}
		}
		else
		{
			if(SUM[i]>0)
			{
				printf("+%dx^%d",SUM[i],i);
			}
			else if(SUM[i]<0)
			{
				printf("%dx^%d",SUM[i],i);
			}
		}
	}
	printf("\n");
	
	DIFFERENCE=DIFFERENCE_OF_EQUATIONS(A,N,M);
	
	printf("The DIFFERENCE of the EQUATIONS is: ");
	for(i=0;i<M;i++)
	{
		if(i==0)
		{
			printf("%d",DIFFERENCE[i]);
		}
		else if(i==1)
		{
			if(DIFFERENCE[i]>0)
			{
				printf("+%dx",DIFFERENCE[i]);	
			}
			else if(DIFFERENCE[i]<0)
			{
				printf("%dx",DIFFERENCE[i]);
			}
		}
		else
		{
			if(DIFFERENCE[i]>0)
			{
				printf("+%dx^%d",DIFFERENCE[i],i);	
			}
			else if(DIFFERENCE[i]<0)
			{
				printf("%dx^%d",DIFFERENCE[i],i);
			}
		}
	}
	printf("\n");
	
	free(A);free(SUM);free(DIFFERENCE);
	
	return 0;
}

