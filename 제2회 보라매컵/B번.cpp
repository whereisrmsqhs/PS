#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, temp, item_floor, ans=-1;
long long P;
vector<int> f;

void Fight(){
  sort(f.begin(), f.end());
  int idx = 0;
  while(idx < f.size()){
    if(f[idx] <= P){
      P += f[idx];
      idx++;
      continue;
    }
    if(item_floor <= 0) {
      ans=0;
      return;
    }
    item_floor--;
    P *= 2;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M >> P;

  vector<int> e_v;
  for(int i = 0; i < N; i++){
    item_floor=0;
    f = e_v;
    for(int i = 0; i < M; i++){
      cin >> temp;
      if(ans==0) continue;
      if(temp >= 0 && temp <= P){
        P+=temp;
        continue;
      }
      else if(temp==-1){
        item_floor++;
        continue;
      }
      f.push_back(temp);
    }

    if(!f.empty()){
      Fight();
    }
    if(item_floor!=0){
      for(int i = 0; i < item_floor; i++){
        P *= 2;
      }
    }
  }
  if(ans==-1) ans=1;
  cout << ans << "\n";
  return 0;
}