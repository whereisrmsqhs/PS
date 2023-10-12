#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, temp, cnt=987654321, t_cnt=0;
vector<int> scv;
int damage[3] = {9, 3, 1};

void permutation(vector<int> v){
  t_cnt++;
  sort(v.begin(), v.end());
  do {
    int zeros = 0;
    vector<int> t_v = v;
    for(int i = 0; i < N; i++){
      t_v[i] -= damage[i];
      if(t_v[i] <= 0) zeros++;
    }
    for(int i = 0; i < N; i++){
      cout << t_v[i] << " ";
    }
    cout << "\n";
    cout << "t_cnt: " << t_cnt << ", cnt: " << cnt << "\n";
    if(zeros == N){
      cnt = min(cnt, t_cnt);
      t_cnt--;
      return; 
    }
    else{
      permutation(t_v);
    }
  } while(next_permutation(v.begin(), v.end()));
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> temp;
    scv.push_back(temp);
  }
  permutation(scv);

  cout << cnt << "\n";
}
