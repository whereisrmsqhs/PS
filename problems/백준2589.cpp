#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
#include<tuple>
#include<algorithm>
using namespace std;

int N, M, x, y;
string temp;
vector<string> map;
int visited[51][51], distance_map[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(int bx, int by){
  int max_distance = 0;
  queue<pair<int, int>> q;
  q.push({bx, by});
  visited[bx][by] = 1;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(map[nx][ny]=='W' || visited[nx][ny]==1) continue;
      visited[nx][ny] = 1;
      q.push({nx, ny});
      distance_map[nx][ny] = distance_map[x][y] + 1;
      max_distance = max(max_distance, distance_map[nx][ny]);
    }
  }
  return max_distance;
}

int main(){
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    cin >> temp;
    map.push_back(temp);
  }
  int ans = 0;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(map[i][j]=='L'){
        memset(visited, 0, sizeof(visited));
        memset(distance_map, 0, sizeof(distance_map));
        int _ret = bfs(i, j);
        ans = max(ans, _ret);
      }
    }
  }
  cout << ans<< "\n";
  return 0;
}