#include<stdio.h>
#include<stdlib.h>

int ** CREATE_SYMMETRIC_MATRIX(int ** A, int R) {
  int i, j;
  int ** T, ** S;

  T = (int ** ) malloc(R * sizeof(int * ));
  for (i = 0; i < R; i++) {
    T[i] = (int * ) malloc(R * sizeof(int));
  }

  S = (int ** ) malloc(R * sizeof(int * ));
  for (i = 0; i < R; i++) {
    S[i] = (int * ) malloc(R * sizeof(int));
  }

  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      T[j][i] = A[i][j];
    }
  }

  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      S[i][j] = A[i][j] + T[i][j];
    }
  }

  return S;
}

int ** CREATE_SKEW_SYMMETRIC_MATRIX(int ** A, int R) {
  int i, j;
  int ** T, ** S;

  T = (int ** ) malloc(R * sizeof(int * ));
  for (i = 0; i < R; i++) {
    T[i] = (int * ) malloc(R * sizeof(int));
  }

  S = (int ** ) malloc(R * sizeof(int * ));
  for (i = 0; i < R; i++) {
    S[i] = (int * ) malloc(R * sizeof(int));
  }

  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      T[j][i] = A[i][j];
    }
  }

  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      S[i][j] = A[i][j] - T[i][j];
    }
  }

  return S;
}

int CHECK_SYMMETRIC(int ** A, int R) {
  int i, j, ctr = 0;
  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      if ( * ( * (A + i) + j) == * ( * (A + j) + i))
        ctr++;
    }
  }
  return (ctr == R * R);
}

int CHECK_SKEW_SYMMETRIC(int ** A, int R) {
  int i, j, ctr = 0;
  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      if ( * ( * (A + i) + j) == - * ( * (A + j) + i))
        ctr++;
    }
  }
  return (ctr == R * R);
}

int main() {

  int i, j, ch, R;
  int ** A, ** SYMMETRIC, ** SKEW_SYMMETRIC;

  printf("Enter the number of ROWS: ");
  scanf("%d", & R);

  A = (int ** ) malloc(R * sizeof(int * ));
  for (i = 0; i < R; i++) {
    A[i] = (int * ) malloc(R * sizeof(int));
  }

  printf("Enter the ELEMENTS of the MATRIX: ");
  for (i = 0; i < R; i++) {
    for (j = 0; j < R; j++) {
      scanf("%d", ( * (A + i) + j));
    }
  }

  printf("1. Create Symmetric\n2. Create Skew Symmetric\n3. Check Symmetric\n4. Check Skew Symmetric\n5. Exit\n");
  printf("Enter choice: ");
  scanf("%d", & ch);

  switch (ch) {
  case 1:
    SYMMETRIC = CREATE_SYMMETRIC_MATRIX(A, R);
    printf("The SYMMETRIC MATRIX is:\n");
    for (i = 0; i < R; i++) {
      for (j = 0; j < R; j++) {
        printf("%d ", SYMMETRIC[i][j]);
      }
      printf("\n");
    }
    free(A);
    free(SYMMETRIC);
    free(SKEW_SYMMETRIC);
    break;
  case 2:
    SKEW_SYMMETRIC = CREATE_SKEW_SYMMETRIC_MATRIX(A, R);
    printf("The SKEW-SYMMETRIC MATRIX is:\n");
    for (i = 0; i < R; i++) {
      for (j = 0; j < R; j++) {
        printf("%d ", SKEW_SYMMETRIC[i][j]);
      }
      printf("\n");
    }
    free(A);
    free(SYMMETRIC);
    free(SKEW_SYMMETRIC);
    break;
  case 3:
    printf("The MATRIX is SYMMETRIC: %d\n", CHECK_SYMMETRIC(A, R));
    free(A);
    free(SYMMETRIC);
    free(SKEW_SYMMETRIC);
    break;
  case 4:
    printf("The MATRIX is SKEW-SYMMETRIC: %d\n", CHECK_SKEW_SYMMETRIC(A, R));
    free(A);
    free(SYMMETRIC);
    free(SKEW_SYMMETRIC);
    break;
  case 5:
    free(A);
    free(SYMMETRIC);
    free(SKEW_SYMMETRIC);
    exit(0);
  }
  return 0;
}
