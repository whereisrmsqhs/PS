#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, a, b;
  cin >> N >> M;

  vector<int> v(N+1);
  for(int i = 1; i <= N; i++){
    v[i] = i;
  }

  for(int i = 0; i < M; i++){
    cin >> a >> b;
    swap(v[a], v[b]);
  }

  for(int i = 1; i <= N; i++){
    cout << v[i] << " ";
  }
  return 0;
}