#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
  int n, tmp;
  int max_value = -1000001;
  int min_value = 1000001;

  long long int sum = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &tmp);
    sum += tmp;
    max_value = max(max_value, tmp);
    min_value = min(min_value, tmp);
  }
  printf("%d %d %lld\n", min_value, max_value, sum);
  return 0;
}