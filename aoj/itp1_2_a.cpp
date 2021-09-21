#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  string buff;
  if (a > b) {
    buff = ">";
  } else if (a < b) {
    buff = "<";
  } else {
    buff = "==";
  }

  cout << "a " << buff << " b" << endl;

  return 0;
}