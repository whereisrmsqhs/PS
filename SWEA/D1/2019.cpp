#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 1;
  cout << a << " ";
  for (int i = 0; i < n; i++) {
    a *= 2;
    cout << a << " ";
  }
  cout << "\n";

  return 0;
}