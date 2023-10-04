#include<iostream>
#include<cstring>
#include<queue>
#include<tuple>
#define MAX 100
using namespace std;

int N, M, x, y, nx, ny, cheese_piece=-1;
int map[MAX][MAX], visited[MAX][MAX];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> cheeses;

void bfs(){
  cheese_piece=0;
  queue<pair<int, int>> q;
  q.push({0, 0});
  visited[0][0] = 1;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++){
      nx = x + dx[i];
      ny = y + dy[i];
      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(visited[nx][ny]==1) continue;
      if(map[nx][ny]==1){
        cheese_piece++;
        visited[nx][ny]=1;
        map[nx][ny]=0;
        continue;
      }
      visited[nx][ny]=1;
      q.push({nx, ny});
    }
  }
}

void Search(){
  while(cheese_piece!=0){
    memset(visited, 0, sizeof(visited));
    bfs();
    if(cheese_piece != 0) cheeses.push_back(cheese_piece);
  }
}

void Insert(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> map[i][j];
    }
  }
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;

  memset(map, -1, sizeof(map));
  Insert();
  Search();

  cout << cheeses.size() << "\n";
  cout << cheeses[cheeses.size()-1] << "\n";
  return 0;
}