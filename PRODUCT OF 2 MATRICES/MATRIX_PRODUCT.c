#include<stdio.h>
#include<stdlib.h>

int ** MATRIX_PRODUCT(int ** A, int R1, int C1, int ** B, int R2, int C2) 
{
    int ** C;
    int i, j, k;

    if (C1 != R2) {
      printf("M/M not possible");
      return NULL;
    }

    C = (int ** ) malloc(R1 * sizeof(int * ));
    for (i = 0; i < R1; i++) {
      *(C + i) = (int * ) malloc(C2 * sizeof(int)); {
        for (j = 0; j < C2; j++) {
          for (k = 0; k < R1; k++) {
            *( * (C + i) + j) = * ( * (C + i) + j) + * ( * (A + i) + k) * * ( * (B + k) + j);
          }
        }
      }

      return C;
}

int CHECK_SPARSE(int ** A, int R, int C)
{
	int i,j,count=0;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(*(*(A+i)+j)==0)
				count++;
		}
	}
	return (count>(R*C)/2);
}

int main()
{
	int i,j,R,C;
	printf()
	printf("Enter the Matrix:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",)
		}
	}
	return 0;
}
