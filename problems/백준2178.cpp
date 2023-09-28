#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int N, M;
int maze[100][100] = {0,};
int visited[100][100] = {0, };
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int x, y;

void bfs(int cx, int cy){
  queue<pair<int, int>> q;
  q.push({cx, cy});
  visited[cx][cy] = 1;
  while (!q.empty())
  {
    tie(x, y) = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(maze[nx][ny] == 0 || visited[nx][ny]==1) continue;
      visited[nx][ny] = 1;
      maze[nx][ny] = maze[x][y]+1;
      q.push({nx, ny});
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;

  string temp;
  for(int i = 0; i < N; i++){
    cin >> temp;
    for(int j = 0; j < M; j++){
      maze[i][j] = temp[j] -48;
    }
  }

  bfs(0, 0);
  cout << maze[N-1][M-1] << "\n";
  return 0;
}