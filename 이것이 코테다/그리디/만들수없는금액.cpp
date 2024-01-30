#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 코드 보다는 이러한 유형의 그리디 패턴이 생소했던 문제다.

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

  int target = 1;
  for (int i = 0; i < N; i++) {
    if (target>=v[i]) {
      target += v[i];
    }
    else break;
  }

  cout << target << "\n";
  return 0;
}