// 출처 :  https://transferhwang.tistory.com/462
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int scv[3], N;
int dp[61][61][61]; 

int dfs(int a, int b, int c){
  if(a < 0) return dfs(0, b, c);
  if(b < 0) return dfs(a, 0, c);
  if(c < 0) return dfs(a, b, 0);

  if(dp[a][b][c] != -1) return dp[a][b][c];
  if(a == 0 && b == 0 && c == 0) return 0;

  dp[a][b][c] = 987654321;
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 9, b - 3, c - 1) + 1);
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 9, b - 1, c - 3) + 1);
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 3, b - 9, c - 1) + 1);
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 3, b - 1, c - 9) + 1);
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 1, b - 9, c - 3) + 1);
  dp[a][b][c] = min(dp[a][b][c], dfs(a - 1, b - 3, c - 9) + 1);

  return dp[a][b][c];
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> scv[i];
  }

  memset(dp, -1, sizeof(dp));
  cout << dfs(scv[0], scv[1], scv[2]);
}