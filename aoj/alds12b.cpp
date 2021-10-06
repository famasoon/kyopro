#include <cstdio>

int selectionSort(int A[], int N)
{
  int t, sw = 0, minj;
  for (int i = 0; i < N; i++)
  {
    minj = i;
    for (int j = i; j < N; j++)
    {
      if (A[j] < A[minj])
      {
        minj = j;
      }
    }
    t = A[i];
    A[i] = A[minj];
    A[minj] = t;
    if (i != minj)
      sw++;
  }
  return sw;
}

int main()
{
  int n, count;
  scanf("%d", &n);
  int A[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }

  count = selectionSort(A, n);

  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      printf(" ");
    }
    printf("%d", A[i]);
  }

  printf("\n");
  printf("%d\n", count);

  return 0;
}