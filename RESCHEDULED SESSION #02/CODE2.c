#include<stdio.h>
#include<stdlib.h>

int * mergeSorted(int * A, int N1, int * B, int N2) {
  int N = (N1 + N2);
  int * C = (int * ) malloc(N * sizeof(int));
  int i = 0, j = 0, k = 0;

  while (i < N1 && j < N2) {
    if ( * (A + i) < * (B + j)) {
      *(C + k) = * (A + i);
      i++;
      k++;
    } else {
      *(C + k) = * (B + j);
      j++;
      k++;
    }
  }

  while (i < N1) {
    *(C + k) = * (A + i);
    i++;
    k++;
  }

  while (j < N2) {
    *(C + k) = * (B + j);
    j++;
    k++;
  }

  return C;

}

int * mergeSequential(int * A, int N1, int * B, int N2) {
  int N = (N1 + N2);
  int * C = (int * ) malloc(N * sizeof(int));
  int i, k = 0;

  for (i = 0; i < N1; i++) {
    *(C + k) = * (A + i);
    k++;
  }

  for (i = 0; i < N2; i++) {
    *(C + k) = * (B + i);
    k++;
  }
  return C;
}

int main() {
  int X, Y, i, ch;
  int * A, * B, * D;
  scanf("%d%d", & X, & Y);
  A = (int * ) malloc(X * sizeof(int));
  B = (int * ) malloc(Y * sizeof(int));

  for (i = 0; i < X; i++)
    scanf("%d", (A + i));

  for (i = 0; i < Y; i++)
    scanf("%d", (B + i));

  printf("1. Merge Sequential 2. Merge Sorted 3. Exit\nEnter choice:");
  scanf("%d", & ch);

  switch (ch) {
  case 1:
    D = mergeSequential(A, X, B, Y);

    for (i = 0; i < (X + Y); i++)
      printf("%d ", *(D + i));
    free(A);free(B);free(D);
    break;

  case 2:
    D = mergeSorted(A, X, B, Y);

    for (i = 0; i < (X + Y); i++)
      printf("%d ", *(D + i));     
    free(A);free(B);free(D);
    break;

  case 3:
  	free(A);free(B);free(D);
    exit(0);
  }

  return 0;
}
