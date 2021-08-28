#include<stdio.h>
#include<stdlib.h>

int n;

int main()
{
	int i;
	printf("Enter the initial size of the array: ");
	scanf("%d",&n);
	
	int A[100];
	
	printf("Enter %d elements of the array: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
		
	void INSERT(int A[], int VALUE, int POSITION)
	{
		if(POSITION<0)
			printf("Insert Failure\n\n");
		else
		{
		    n++;
			for(i=n-1; i>=POSITION+1; i--)
				A[i]=A[i-1];
			A[POSITION]=VALUE;
			printf("Insert Success\n\n");
		}
	}
	
	void DELETE_BY_VALUE(int A[], int VALUE)
	{
		int POSITION, FLAG=0;
		for(i=0; i<n; i++)
		{
			if(A[i]==VALUE)
			{
				POSITION=i;
				FLAG=1;
				break;
			}	
		}
		if(FLAG)
		{
			for(i=POSITION+1; i<n; i++) 
				A[i-1]=A[i];
			n--;
			printf("Deleted\n\n");
		}
		else
			printf("Not Found\n\n");
	}
	
	void DELETE_BY_POSITION(int A[], int POSITION)
	{
		if(POSITION<0)
			printf("Cannot Delete\n\n");
		else
		{
			for(i=POSITION+1; i<n; i++)
				A[i-1]=A[i];
			n--;
			printf("Deleted\n\n");
		}
	}
	
	void DISPLAY(int A[])
	{
		for(i=0; i<n; i++)
			printf("%d ",A[i]);
		printf("\n\n");
	}
		
	while(1)
	{
		printf("1. INSERT\n2. DELETE BY VALUE\n3. DELETE BY POSITION\n4. DISPLAY\n5. EXIT\n");
		printf("\nEnter your choice: ");
		int ch;
		scanf("%d",&ch);
		
		int VALUE,POSITION;
		
		switch(ch)
		{
			case 1:
				printf("Enter the VALUE and POSITION: ");
				scanf("%d%d",&VALUE,&POSITION);
				INSERT(A, VALUE, POSITION);
				break;
			case 2:
				printf("Enter the VALUE: ");
				scanf("%d",&VALUE);
				DELETE_BY_VALUE(A, VALUE);
				break;
			case 3:
				printf("Enter the POSITION: ");
				scanf("%d",&POSITION);
				DELETE_BY_POSITION(A, POSITION);
				break;
			case 4:
				printf("The Final Array is:\n");
				DISPLAY(A);
				break;
			default:
				exit(0);
				break;
		}
	}
	
	return 0;
}
