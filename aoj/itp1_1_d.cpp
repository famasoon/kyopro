#include <iostream>
using namespace std;

int main() {
  int h, m, s, input;
  cin >> input;
  h = input / 3600;
  m = input % 3600 / 60;
  s = input % 60;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}