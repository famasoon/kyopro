#include<cstdio>

void trace(int A[], int N){
  for (int i = 0; i < N; i++){
    if (0 < i) {
      printf(" ");
    }
    printf("%d", A[i]);
  }
  printf("\n");
}

void insertionSort(int A[], int N) {
  int i, j, value;
  for (i = 1; i < N; i++){
    value = A[i];
    j = i - 1;
    while (j >= 0 && A[j] > value) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = value;
    trace(A, N);
  }
}

int main() {
  int n;

  scanf("%d", &n);

  int A[n];
  for (int i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  trace(A, n);
  insertionSort(A, n);

  return 0;
}