#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int N, K, ans=0;
vector<int> visited(100001);
vector<int> answer;

void bfs(int start){
  if(start==K){
    cout << ans << "\n";
    answer.push_back(ans);
    return ; 
  }

  visited[start] = 1;
  ans++;

  if(start+1 <= 100000 && visited[start+1] == 0){
    bfs(start+1);
  }
  if(start-1 >= 0 && visited[start-1] == 0){
    bfs(start-1);
  }
  if(start*2 <= 100000 && visited[2*start] == 0){
    bfs(2*start);
  }
  visited[start+1] = 0;
  
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;

  bfs(N);
}