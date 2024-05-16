#include<iostream>
#include<vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 1 ; i <= t; i++) {
    cout << "#" << i << " ";
    int num = 0;
    cin >> num;
    long n;
    vector<long> v;
    for (int j = 0; j < num; j++) {
      cin >> n;
      v.push_back(n);
    }

    long max = 0;
    long ans = 0;
    for (int j = num-1; j >= 0; j--) {
      if (v[j] <= max) {
        ans += (max - v[j]);
      }
      else if (v[j] > max) {
        max = v[j];
      }
    }
    cout << ans << "\n";
  }
  return 0;
}