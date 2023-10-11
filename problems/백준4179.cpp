#include<iostream>
#include<cstring>
#include<queue>
#include<tuple>
#include<algorithm>
#include<vector>
using namespace std;

const int INF = 987654321;
int R, C, jx, jy, x, y, ret=0;
char maze[1000][1000];
int fire_map[1000][1000], jh_map[1000][1000];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> R >> C;

  fill(&fire_map[0][0], &fire_map[0][0]+1000 * 1000, INF);
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      cin >> maze[i][j];
      if(maze[i][j]=='J'){
        jx = i; jy = j;
      }
      else if(maze[i][j]=='F'){
        fire_map[i][j] = 1;
        q.push({i, j});
      }
    }
  }

  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
      if(fire_map[nx][ny]!=INF || maze[nx][ny] == '#') continue;
      fire_map[nx][ny] = fire_map[x][y]+1;
      q.push({nx, ny});
    }
  }

  jh_map[jx][jy] = 1;
  q.push({jx, jy});
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    if(x == 0 || x == R-1 || y == 0 || y == C-1){
      ret = jh_map[x][y];
      break;
    }
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
      if(jh_map[nx][ny] || maze[nx][ny] == '#') continue;
      if(fire_map[nx][ny] <= jh_map[x][y]+1 ) continue;
      jh_map[nx][ny] = jh_map[x][y]+1;
      q.push({nx, ny});
    }
  }

  if(ret!=0){
    cout << ret << "\n";
  }
  else {
    cout << "IMPOSSIBLE" << "\n";
  }
  return 0;
  
}