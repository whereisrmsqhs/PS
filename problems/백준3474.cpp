#include<iostream>
#include<cstring>
using namespace std;

int T, N, answer;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> T;

  for(int i = 0;i < T; i++){
    cin >> N;
    answer=0;
    for (int i = 5; i <= N; i *= 5) 
      answer += N / i;

    cout << answer << "\n";
  }

  return 0;
}