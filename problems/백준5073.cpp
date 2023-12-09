#include<iostream>
using namespace std;

int a, b, c;

int isTriangle() {
  if(a + b <= c || b + c <= a || c + a <= b) {
    return -1;
  }
  else return 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while(true) {
    cin >> a >> b >> c;
    if(a==0 && b==0 && c==0) break;

    int triangle = isTriangle();
    if(triangle == -1) {
      cout << "Invalid" << "\n";
      continue;
    }

    if(a==b && b==c && c==a) {
      cout << "Equilateral" << "\n";
      continue;
    }
    else if(a==b || b==c || c==a) {
      cout << "Isosceles" << "\n";
      continue;
    }
    else {
      cout << "Scalene" << "\n";
      continue;
    }
  }
  return 0;
}