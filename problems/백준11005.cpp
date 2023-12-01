#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, B;
  cin >> N >> B;

  vector<int> result;
  while(1) {
    if(N / B == 0) break;
    result.push_back(N % B);
    N = N / B;
  }
  result.push_back(N);

  for(int i = result.size()-1; i >= 0; i--) {
    if(result[i] >= 0 && result[i] <= 9) {
      cout << result[i];
    }
    else cout << (char)(result[i] - 10 + 'A');
  }
  cout << "\n";
  return 0;
}