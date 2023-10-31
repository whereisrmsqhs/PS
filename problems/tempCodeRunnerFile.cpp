#include<iostream>
#include<queue>
using namespace std;

int visited[2][500001];
int N, K;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;
  if(N==K){
    cout << 0 << "\n";
    return 0;
  }

  queue<int> q;
  q.push(N);
  visited[0][N] = 1;

  int t = 1;
  bool meet = false;
  while(!q.empty()){
    K += t;
    if(visited[t%2][K]){
      meet = true;
      break;
    }
    int qsize = q.size();
    for(int i = 0; i < qsize; i++){
      int here = q.front(); q.pop();
      for(int there : {here+1, here-1, here*2}){
        if(there < 0 || there >= 500001 || visited[t%2][there]==1) continue;
        if(there==K) { meet = true; break;}
        visited[t%2][there] = 1;
        q.push(there);
      }
      if(meet) break;
    }
    if(meet) break;
    t++;
  }
  (meet) ? (cout << t) : (cout << -1);
  cout << "\n";
  return 0;
}