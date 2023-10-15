#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);

  sort(v.begin(), v.end());

  int type = 1;
  for(int i = 0; i < 2; i++){
    if(v[i] == v[i+1]){
      type++;
    }
  }

  int answer = 0;
  if(type==1){
    int max_num = max(v[0], v[1]);
    max_num = max(max_num, v[2]);
    answer = max_num * 100;
  }
  else if(type==2){
    int same = v[0];
    int not_same = 0;
    for(int i = 1; i < 3; i++){
      if(same != v[i]){
        not_same++;
      }
    }
    if(not_same==2){
      answer = v[1]*100+1000;
    }
    else{
      answer = same*100+1000;
    }
  }
  else if(type==3){
    answer = v[0]*1000+10000;
  }
  cout << answer << "\n";
  return 0;
}