#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;

  vector<int> v;
  for(int i = 0; i < s.length(); i++) {
    v.push_back(s[i] - '0');
  }

  // sort(v.begin(), v.end(), greater<int>());

  // int result = v[0];
  // for(int i = 1; i < v.size(); i++) {
  //   if (v[i] == 0 || v[i] == 1 || result == 0 || result == 1) {
  //     result += v[i];
  //     continue;
  //   }
  //   result *= v[i];
  // }

  int result = v[0];
  for (int i = 1; i < v.size(); i++) {
    if (result <= 1 || v[i] <= 1) {
      result += v[i];
      continue;
    }
    result *= v[i];
  }

  cout << result << "\n";
  return 0;
}