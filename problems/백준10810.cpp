#include<iostream>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  vector<int> v(N);
  int i, j, k;
  for(int b = 0; b < M; b++){
    cin >> i >> j >> k;
    for(int a = i-1; a < j; a++){
      v[a] = k;
    }
  }

  for(int a = 0; a < N; a++){
    cout << v[a] << " ";
  }
  cout << "\n";
  return 0;
}