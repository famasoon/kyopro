#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int area, length;
  area = x * y;

  length = x * 2 + y * 2;

  cout << area << " " << length << endl;
  return 0;
}