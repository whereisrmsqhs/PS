#include<iostream>
#include<queue>
#include<tuple>
#include<cstring>
using namespace std;

int N, M, x, y, cnt=3, ans=0;
int map[10][10], tmap[10][10];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      tmap[i][j] = map[i][j];
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(tmap[i][j]==2){
        queue<pair<int, int>> q;
        q.push({i, j});
        while(!q.empty()){
          tie(x, y) = q.front(); q.pop();
          for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if(tmap[nx][ny]==0){
              q.push({nx, ny});
              tmap[nx][ny] = 2;
            }
          }
        }
      }
    }
  }
  int temp = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(tmap[i][j]==0) temp++;
    }
  }
  
  if(temp > ans) ans = temp;
}

void search(){
  if(cnt==0){
    return bfs();
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(map[i][j]==0){
        cnt--;
        map[i][j]=1;
        search();
        cnt++;
        map[i][j]=0;
      }
    }
  }
}

int main(){
  cin >> N >> M;

  memset(map, -1, sizeof(map));
  memset(tmap, -1, sizeof(tmap));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> map[i][j];
    }
  }

  search();
  cout << ans << "\n";
  return 0;
}