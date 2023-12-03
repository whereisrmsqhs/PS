#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n, x = 2;

  cin >> n;

  while(n--) {
    x += (x-1);
  }

  x*=x;
  cout << x << "\n";
  return 0;
}