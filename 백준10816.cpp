#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  unordered_map<int, int> m;

  cin >> N;
  int temp;
  for(int i = 0; i < N; i++){
    cin >> temp;
    m[temp]++;
  }

  cin >> M;
  for(int i = 0; i < M; i++){
    cin >> temp;
    cout << m[temp] << " ";
  }

  return 0;
}