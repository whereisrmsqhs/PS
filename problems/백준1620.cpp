#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  cin >> N >> M;

  unordered_map<int, string> um;
  unordered_map<string, int> um2;
  string pocketmon_name;
  for(int i = 0; i < N; i++){
    cin >> pocketmon_name;
    um.insert(make_pair(i+1, pocketmon_name));
    um2.insert(make_pair(pocketmon_name, i+1));
  }

  vector<string> questions(M);
  for(int i = 0; i < M; i++){
    cin >> questions[i];
  }

  for(int i = 0; i < M; i++){
    if(isdigit(questions[i][0])){
      int num = stoi(questions[i]);
      cout << um[num] << '\n';
      continue;
    }
    cout << um2[questions[i]] << '\n'; 
  }
}