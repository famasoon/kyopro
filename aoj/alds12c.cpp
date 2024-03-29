#include <iostream>
using namespace std;

struct Card
{
  char suit;
  char value;
};

void bubble(struct Card A[], int N) {
  for(int i = 0; i < N; i++) {
    for (int j = N - 1; j >= i; j++) {
      if (A[j].value < A[j -1].value) {
        Card t = A[j];
        A[j] = A[j - 1];
        A[j - 1] = t;
      }
    }
  }
}

void selection(struct Card A[], int N) {
  for(int i = 0; i < N; i++) {
    int tmp = i;
    for(int j = i; j < N; j++) {
      if(A[j].value < A[tmp].value) {
        tmp = j;
      }
    }
    Card t = A[i];
    A[i] = A[tmp];
    A[tmp] = t;
  }
}

void print(struct Card A[], int N) {
  for(int i = 0; i < N; i++) {
    if(i > 0) {
      cout << A[i].suit << A[i].value;
    }
  }
  cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
  for (int i = 0; i < N; i++) {
    if(C1[i].suit != C2->suit) {
      return false;
    }
  }
  return true;
}

int main() {
  Card C1[100], C2[200];
  int N;
  cin >> N;
  int A[N];

  for (int i = 0; i < N; i++)
  {
    cin >> C1[i].suit >> C1[i].value;
  }

  for (int i = 0; i < N; i++){
    C2[i] = C1[i];
  }

  bubble(C1, N);
  selection(C2, N);

  print(C1, N);
  cout << "Stable" << endl;
  print(C2, N);

  if(isStable(C1, C2, N)){
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;
}