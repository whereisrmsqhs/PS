#include<iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == 1) {
    if (b == 2) {
      cout << "B" << "\n";
    }
    else if (b == 3) {
      cout << "A" << "\n";
    }
  } else if (a == 2) {
    if (b == 1) {
      cout << "A" << "\n";
    }
    else if (b == 3) {
      cout << "B" << "\n";
    }
  } else if (a == 3) {
    if (b == 1) {
      cout << "B" << "\n";
    }
    else if (b == 2) {
      cout << "A" << "\n";
    }
  }
  return 0;
}