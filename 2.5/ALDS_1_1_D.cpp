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

  int minv = R[0];

  for (size_t i = 1; i < n; i++) {
    if(maxv < R[i] - minv){
      maxv = R[i] - minv;
    }
    if (minv > R[i]) {
      minv = R[i];
    }
  }


  cout << maxv << endl;
}
