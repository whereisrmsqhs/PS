#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int N, K, ans;
int cnt = 0;
vector<int> visited(100001);
vector<int> from(100001);
vector<int> route;

void bfs(){
  queue<pair<int, int>> q;
  q.push({N, 0});
  from[N] = -1;
  visited[N] = 1;
  while(!q.empty()){
    int loc = q.front().first;
    int time = q.front().second;
    q.pop();

    if(loc==K){
      ans = time;

      int rloc = loc;
      while (true)
      {
        if(rloc==-1) break;
        route.push_back(rloc);
        rloc = from[rloc];
      }
      return;
    }

    if(loc-1 >= 0 && visited[loc-1]==0){
      visited[loc-1] = 1;
      from[loc-1] = loc;
      q.push({loc-1, time+1});
    }
    if(loc+1 <= 100001 && visited[loc+1]==0){
      visited[loc+1] = 1;
      from[loc+1] = loc;
      q.push({loc+1, time+1});
    }
    if(loc*2 <= 100001 && visited[loc*2]==0){
      visited[loc*2] = 1;
      from[loc*2] = loc;
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
  fill(from.begin(), from.end(), -1);
  bfs();

  cout << ans << "\n";
  for(int i = route.size()-1; i >= 0; i--){
      cout << route[i] << " ";
    }
  
  cout << "\n";

  return 0;
}