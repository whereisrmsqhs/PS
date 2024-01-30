#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, input;
  vector<int> v;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> input;
    v.push_back(input);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < N; i++) {
    v[i] = v[i] * (N - i);
  }

  int max = *max_element(v.begin(), v.end());
  cout << max << "\n";

  return 0;
}