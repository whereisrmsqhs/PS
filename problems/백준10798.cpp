#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> v;
  string temp;
  for(int i = 0; i < 5; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  int c = 0;
  while(c < 15) {
    for(int i = 0; i < 5; i++) {
      if(v[i].length() <= c) continue;
      cout << v[i][c];
    }
    c++;
  }
  cout << "\n";
  return 0;
}