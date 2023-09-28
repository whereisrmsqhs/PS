#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int N, C;
map<int, int> order;

bool cmp(pair<int, int>& a, pair<int, int>& b){
  if(a.second == b.second){
    return order[a.first] < order[b.first];
  }
  return a.second > b.second;
}

int main(){
  cin >> N >> C;

  map<int, int> m;
  int temp;
  for(int i = 0; i < N; i++){
    cin >> temp;
    if(order[temp]==0){
      order[temp]=i+1;
    }
    m[temp]++;
  }

  vector<pair<int, int>> v (m.begin(), m.end());
  sort(v.begin(), v.end(), cmp);

  for(auto x : v){
    for(int i = 0; i < x.second; i++){
      cout << x.first << " ";
    }
  }

  return 0;

}