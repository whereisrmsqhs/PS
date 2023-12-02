#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T, C;

  cin >> T;
  int quarter, dime, nickel, penny;
  for(int i = 0; i < T; i++) {
    cin >> C;

    quarter = C / 25;
    C = C % 25;
    dime = C / 10;
    C = C % 10;
    nickel = C / 5;
    C = C % 5;
    penny = C / 1;

    cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
  }

  return 0;
}