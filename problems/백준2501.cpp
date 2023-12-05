#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  vector<int> num_list;
  cin >> N >> K;

  for(int i = 1; i <= N; i++) {
    if(N % i == 0) {
      num_list.push_back(i);
    }
  }

  if(K > num_list.size()) {
    cout << 0 << "\n";
    return 0;
  }

  cout << num_list[K-1] << "\n";
  return 0;
}