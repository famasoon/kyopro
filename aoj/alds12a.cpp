#include <iostream>
using namespace std;

int bubbleSort(int array[], int n)
{
  int sw = 0;
  bool flag = 1;
  for (int i = 0; flag; i++)
  {
    flag = 0;
    for (int j = n - 1; j >= i + 1; j--)
    {
      if (array[j] < array[j - 1])
      {
        swap(array[j], array[j - 1]);
        flag = 1;
        sw++;
      }
    }
  }
  return sw;
}

int main()
{
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
    cin >> array[i];

  int sw = bubbleSort(array, n);

  for (int i = 0; i < n; i++)
  {
    if (i)
      cout << " ";
    cout << array[i];
  }

  cout << endl;
  cout << sw << endl;

  return 0;
}