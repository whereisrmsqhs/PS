#include<iostream>
#include<queue>
#include<tuple>
#include<cstring>
#include<algorithm>
using namespace std;

int M, N, K, ix1, iy1, ix2, iy2, x, y, num_space = 0;
int maze[100][100], visited[100][100];
vector<int> sizes;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int cx, int cy){
  int area = 1;
  queue<pair<int, int>> q;
  q.push({cx, cy});
  visited[cx][cy]=1;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
      if(maze[nx][ny]==0 || visited[nx][ny] == 1) continue;
      visited[nx][ny]=1;
      area++;
      q.push({nx, ny});
    }
  }
  sizes.push_back(area);
}

int main(){
  cin >> M >> N >> K;

  memset(maze, 1, sizeof(maze));
  memset(visited, 0, sizeof(visited));
  for(int i = 0; i < K; i++){
    cin >> iy1 >> ix1 >> iy2 >> ix2;
    for(int j = ix1; j < ix2; j++){
      for(int k = iy1; k < iy2; k++){
        maze[j][k] = 0;
      }
    }
  }

  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      if(maze[i][j]!=0 && visited[i][j] != 1){
        bfs(i, j);
        num_space++;
      }
    }
  }
  sort(sizes.begin(), sizes.end());
  cout << num_space << "\n";
  for(int i = 0; i < sizes.size(); i++){
    cout << sizes[i] << " ";
  }
  cout << "\n";
  return 0;
}