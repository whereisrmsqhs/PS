#include<iostream>
#include<tuple>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

int N, max_num, area, x, y;
int m[101][101], visited[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> answers;

void bfs(int cx, int cy, int height_limit){
  queue<pair<int, int>> q;
  q.push({cx, cy});
  visited[cx][cy] = 1;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
      if(m[nx][ny] <= height_limit || visited[nx][ny] == 1) continue;
      visited[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  max_num = -1;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> m[i][j];
      if(m[i][j] > max_num){
        max_num = m[i][j];
      }
    }
  }

  for(int i = 0; i < max_num; i++){
    memset(visited, 0, sizeof(visited));
    area = 0;
    for(int j = 0; j < N; j++){
      for(int k = 0; k < N; k++){
        if(m[j][k] > i && visited[j][k] != 1){
          bfs(j, k, i);
          area++;
        }
      }
    }
    answers.push_back(area);
  }
  cout << *max_element(answers.begin(), answers.end()) << "\n";
  return 0;

}