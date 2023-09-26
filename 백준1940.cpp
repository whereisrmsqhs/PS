#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, answer;
  answer = 0;
  cin >> N >> M;

  vector<int> elements(N);
  for(int i = 0; i < N; i++){
    cin >> elements[i];
  }

  sort(elements.begin(), elements.end());
  for(int i = 0; i < N-1; i++){
    int one_point = elements[i];
    for(int j = N-1; j > i; j--){
      int two_point = elements[j];
      int sum = one_point + two_point;
      if(sum == M) {
        answer++;
      }
      else if(sum > M){
        continue;
      }
      break;
    }
  }
  cout << answer << '\n';
  return 0;
}

