#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a+3);

  if(a[0] + a[1] > a[2]) cout << a[0] + a[1] + a[2];
  else cout << (a[0] + a[1]) * 2 - 1;
}