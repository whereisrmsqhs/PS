#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, input;
  vector<int> v;

  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> input;
    v.push_back(input);
  }

  int answer = 0;

  for (int i = 0; i < N - 1; i++) {
    int a_balling_weight = v[i];
    for (int j = i; j < N; j++) {
      if (v[j] != a_balling_weight) {
        answer++;
      }
    } 
  }

  cout << answer << "\n";
  return 0;
}