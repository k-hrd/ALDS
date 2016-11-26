//ALDS_1_1_D.cpp
#include<iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  int R[n];
  int maxv = -2000000000;

  for (size_t i = 0; i < n; i++) {
    cin >> R[i];
  }

  for (size_t i = 1; i < n; i++) {
    for (size_t j = 0; j < i; j++) {
      if(maxv <= R[i] - R[j]){
        maxv = R[i] - R[j];
      }
    }
  }

  cout << maxv << endl;
}
