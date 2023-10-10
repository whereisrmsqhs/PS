#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int N, L, R, answer=0;
int land[50][50], visited[50][50];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool is_moved;
vector<pair<int, int>> pos;

int dfs(int bx, int by){
  visited[bx][by] = 1;
  pos.push_back({bx, by});
  int ret = land[bx][by];
  for(int i = 0; i < 4; i++){
    int nx = bx + dx[i];
    int ny = by + dy[i];
    if(nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny]==1) continue;
    int difference = abs(land[bx][by]-land[nx][ny]);
    if(L <= difference && difference <= R){
      ret += dfs(nx, ny);
    }
  }
  return ret;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> L >> R;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> land[i][j];
    }
  }

  while(1){
    memset(visited, 0, sizeof(visited));
    is_moved = false;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        if(visited[i][j] != 1){
          pos.clear();
          int sum = dfs(i, j);
          if(pos.size() == 1) continue;
          for(int k = 0; k < pos.size(); k++){
            land[pos[k].first][pos[k].second] = sum / pos.size();
          }
          is_moved = true;
        }
      }
    }
    if(!is_moved) break;
    answer++;
  }
  cout << answer << "\n";
  return 0;
}