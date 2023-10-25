#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int N, K, ans;
int cnt = 0;
vector<int> visited(100001);

void bfs(){
  queue<pair<int, int>> q;
  q.push({N, 0});
  while(!q.empty()){
    int loc = q.front().first;
    int time = q.front().second;
    visited[loc] = 1;
    q.pop();

    if(loc==K){
      if(!ans){
        ans = time;
        cnt = 1;
      }
      else if(ans==time) cnt++;
    }

    if(loc-1 >= 0 && visited[loc-1]==0){
      q.push({loc-1, time+1});
    }
    if(loc+1 <= 100001 && visited[loc+1]==0){
      q.push({loc+1, time+1});
    }
    if(loc*2 <= 100001 && visited[loc*2]==0){
      q.push({loc*2, time+1});
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;

  fill(visited.begin(), visited.end(), 0);
  bfs();

  cout << ans << "\n";
  cout << cnt << "\n";
  return 0;
}