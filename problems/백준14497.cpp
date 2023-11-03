#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int N, M, x_1, y_1, x_2, y_2, x, y;
int map[300][300], visited[300][300];
bool find_chocolate = false;
int dx[4] = {0, 1 , 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(){
  queue<pair<int, int>> q;
  q.push({x_1-1, y_1-1});
  visited[x_1-1][y_1-1] = true;
  while(!q.empty()){
    tie(x, y) = q.front(); q.pop();
    for(int i = 0; i < 4; i++) {
      int cx = dx[i] + x;
      int cy = dy[i] + y;

      if(cx < 0 || cy < 0 || cx > N || cy > M) continue;
      if(visited[cx][cy]==1) continue;
      cout << "cx: " << cx << ", cy: " << cy << "\n";
      if(map[cx][cy]==1){
        map[cx][cy] = 0;
        visited[cx][cy] = 1;
        continue;
      }
      else if(cx==x_2-1 && cy==y_2-1){
        // found
        find_chocolate = true;
        break;
      }
      else if(map[cx][cy]==0){
        visited[cx][cy] = 1;
        q.push({cx, cy});
      }
    }
    if(find_chocolate) break;
  }

}

// 초코바는 -1, 주난이는 2
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  cin >> x_1 >> y_1 >> x_2 >> y_2;

  string input;
  for(int i = 0; i < N; i++){
    cin >> input;
    for(int j = 0; j < input.size(); j++) {
      int num_type = input[j] - '0';
      if(num_type < 0){
        if(num_type == -13){
          map[i][j] = -1;
        }
        else{
          map[i][j] = 2;
        }
      }
      map[i][j] = num_type;
    }
  }

  int jump_count = 0;
  while(find_chocolate==false){
    cout << jump_count << "\n";
    memset(visited, 0, sizeof(visited));
    bfs();
    jump_count++;
  }
  cout << jump_count << "\n";
  return 0;
}