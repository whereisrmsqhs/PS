#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int N, K;
vector<bool> visited(500001);
vector<int> road(500001);
int to_move = 0;

int bfs(){
  queue<pair<int, int>> q;
  q.push({K, 2}); q.push({N, 1}); // 1이면 수빈, 2면 동생 
  road[N] = 0;  road[K] = 0;
  visited[N] = true;
  while(!q.empty()){

    int idx = q.front().first;
    int who = q.front().second;
    // cout << "idx: " << idx << ", who: " << who << "\n";
    q.pop();

    if(who==1){ // 수빈인 경우 
      if(idx+1 <= 500000 && visited[idx+1]==false){
        if(road[idx+1]==road[idx]+1){
          return road[idx+1];
        }
        q.push({idx+1, 1});
        road[idx+1] = road[idx]+1;
        visited[idx+1]=true;
      }
      if(idx-1 >= 0 && visited[idx-1]==false){
        if(road[idx-1]==road[idx]+1){
          return road[idx-1];
        }
        q.push({idx-1, 1});
        road[idx-1] = road[idx]+1;
        visited[idx-1] = true;
      }
      if(idx*2 <= 500000 && visited[idx*2]==false){
        if(road[idx*2]==road[idx]+1){
          return road[idx*2];
        }
        q.push({idx*2, 1});
        road[idx*2] = road[idx]+1;
        visited[idx*2] = true;
      }
    }

    if(who==2){  // 동생인 경우
      to_move++;
      if(idx+to_move > 500000){
        return -1;
      }
      q.push({idx+to_move, 2});
      road[idx+to_move] = road[idx]+1;
      visited[idx+to_move] = false;
    }
  }
  return -1;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;

  if(N==K){
    cout << 0 << "\n";
    return 0;
  }

  fill(visited.begin(), visited.end(), false);
  fill(road.begin(), road.end(), -100);

  int ans = bfs();
  if(ans == -1){
    cout << -1 << "\n";
  }
  else{
    cout << ans << "\n";
  }
  return 0;

}