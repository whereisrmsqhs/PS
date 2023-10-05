#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> tree;
int N, D;

void Insert(){
  cin >> N;
  tree.resize(N+1);
  int temp;
  for(int i = 1; i <= N; i++){
    cin >> temp;
    tree[temp+1].push_back(i);
  }
  cin >> D;
}

int dfs(int node){
  if(node != 0 && tree[node].empty()) return 1;

  int ret = 0;
  for(auto i : tree[node]) ret += dfs(i);

  return ret;
}

void Modify(){
  while(!tree[D+1].empty()){ 
    tree[D+1].pop_back();
  }
  for(auto& node : tree){
    auto itr = find(begin(node), end(node), D+1);
    if(itr != end(node)) node.erase(itr);
  }
  int answer = dfs(0);
  cout << answer << "\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Insert();
  Modify();

  return 0;

}
