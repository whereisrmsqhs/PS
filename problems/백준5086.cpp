#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int first, second;
  while(1) {
    cin >> first >> second;
    if(first==0 && second==0) break;

    if(first > second) {
      if(first % second == 0) {
        cout << "multiple" << "\n";
        continue;
      }
    }
    else if(second > first) {
      if(second % first == 0) {
        cout << "factor" << "\n";
        continue;
      }
    }
    cout << "neither" << "\n";
  }
  return 0;
}