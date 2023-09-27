#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;

  vector<vector<int>> given_a(N+1, vector<int>(M+1)); // 2차 벡터 초기화하는 방법
  vector<vector<int>> psum(N+1, vector<int>(M+1)); // 누적합 벡터
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= M; j++){
      cin >> given_a[i][j];
    }
  }

  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= M; j++){
      psum[i][j] = psum[i-1][j] + psum[i][j-1] + given_a[i][j] - psum[i-1][j-1];
    }
  }

  int K;
  cin >> K;
  
  vector<vector<int>> cooridinate(K, vector<int>(4));
  for(int i = 0; i < K; i++){
    for(int j = 0 ; j < 4; j++){
      cin >> cooridinate[i][j];
    }
  }

  int i, j, x, y;
  i=j=x=y=0;
  vector<int> answers;

  for(int a = 0; a < K; a++){
    i = cooridinate[a][0];
    j = cooridinate[a][1];
    x = cooridinate[a][2];
    y = cooridinate[a][3];

    int answer = psum[x][y] - psum[x][j-1] - psum[i-1][y] + psum[i-1][j-1];
    answers.push_back(answer);
  }

  for(int answer : answers){
    cout << answer << "\n";
  }


}