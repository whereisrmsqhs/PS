#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int Combination(int n, int r){

  if(n==r || r == 0){
    return 1;
  }
  else{
    return Combination(n-1, r-1) + Combination(n-1, r);
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T;
  cin >> T;
  
  int N;
  string clothes_name, key;
  for(int i = 0; i < T; i++){
    unordered_map<string, int> um;
    cin >> N;
    for(int j = 0; j < N; j++){
      cin >> clothes_name >> key;
      um[key]++;
    }
    int answer = 1;
    for(const auto& it : um){
      answer *= ((it.second)+1);
    }
    answer-=1;
    cout << answer << '\n';
  }

  return 0;

}