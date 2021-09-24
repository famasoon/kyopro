#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()  {
  double r;
  cin >> r;

  printf("%.6f %.6f\n", r*r*M_PI, 2*M_PI*r);
}