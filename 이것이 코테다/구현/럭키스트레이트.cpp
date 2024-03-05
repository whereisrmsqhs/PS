#include<iostream>
#include<cstring>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input;
  cin >> input;

  int left = 0, right = 0;
  for (int i = 0; i < input.length() / 2; i++) {
    left = left + (input[i] - '0');
  }
    for (int i = input.length() / 2; i < input.length(); i++) {
    right = right + (input[i] - '0');
  }

  if (left == right) {
    cout << "LUCKY" << "\n";
  } else {
    cout << "READY" << "\n";
  }

  return 0;
}