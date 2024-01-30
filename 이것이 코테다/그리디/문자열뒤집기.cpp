#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  cin >> s;

  s += "2";
  int zero_group_nums = 0;
  int one_group_nums = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[i+1]) {
      if (s[i] == '0') {
        zero_group_nums++;
        continue;
      }
      if (s[i] == '1') 
        one_group_nums++;
    }
  }

  cout << min(zero_group_nums, one_group_nums) << "\n";
  return 0;  
}