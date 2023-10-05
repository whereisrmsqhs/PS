#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int N, M, A, B, cnt, max_length;
vector<vector<int>> tree(10001);
int visited[10001], deeps[10001];

void dfs(int idx){
  cnt++;
  for(auto iter : tree[idx]){
    if(visited[iter]==0){
      visited[iter]=1;
      dfs(iter);
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> A >> B;
    tree[B].push_back(A);
  }

  max_length = -1;
  for(int i = 1; i <= N; i++){
    memset(visited, 0, sizeof(visited));
    visited[i]=1;
    cnt = 0;
    dfs(i);
    deeps[i]=cnt;
    max_length = max(max_length, cnt);
  }

  for(int i = 1; i <= N; i++){
    if(deeps[i]==max_length){
      cout << i << " ";
    }
  }
  cout << "\n";
  return 0;
}