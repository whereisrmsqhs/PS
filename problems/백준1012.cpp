#include<iostream>
#include<queue>
#include<tuple>
#include<cstring>
using namespace std;

int T, M, N, K, ix, iy, ans, x, y;
int maze[50][50], visited[50][50];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int cx, int cy){
  queue<pair<int, int>> q;
  q.push({cx, cy});
  visited[cx][cy] = 1;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
      if(maze[nx][ny] == 0 || visited[nx][ny] == 1) continue;
      visited[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
}

int main(){
  cin >> T;

  for(int i = 0; i < T; i++){
    cin >> M >> N >> K;
    memset(maze, 0, sizeof(maze));
    memset(visited, 0, sizeof(visited));
    ans = 0;

    for(int i = 0; i < K; i++){
      cin >> ix >> iy;
      maze[ix][iy] = 1;
    }

    for(int i = 0; i < M; i++){
      for(int j = 0; j < N; j++){
        if(maze[i][j] == 1 && visited[i][j] == 0){
          ans++;
          bfs(i, j);
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}