//stack.cpp
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;

int top, S[1000];

void push(int x){
  S[++top] =x;
}

int pop(){
  return S[top+1];
}

int main() {
    int a,b;
    top = 0;
    string input;
    while (cin >> input) {
        if (input == "+") {
            a = pop();
            b = pop();
            push(a+b);
          }
        else if (input == "-") {
            a = pop();
            b = pop();
            push(a-b);
          }
        else if (input == "*") {
            a = pop();
            b = pop();
            push(a-b);
          }
        else {
            push(stoi(input));
          }
    }
    cout << pop() << endl;
    }
