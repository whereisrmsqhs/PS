#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  int max = -10000000;
  cin >> N >> K;
  
  vector<int> temperatures(MAX);
  vector<int> psum(MAX);
  vector<int> sequential(MAX);
  for(int i = 0; i < N; i++){
    cin >> temperatures[i];
  }
  psum[0] = 0;
  for(int i = 1; i <= N; i++){
    psum[i] = psum[i-1] + temperatures[i-1];
  }

  int current = 0;
  for(int i = K; i < N; i++){
    current = psum[i] - psum[i-K];
    if(current > max) max = current;
  }

  cout << max << "\n";
  return 0;

  
}
