#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int N;
vector<string> words(101);

void Init(){
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> words[i];
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int answer = 0;
  Init();

  for(int i = 0; i < N; i++){
    stack<char> s;
    string cur_word = words[i];

    for(int i = 0; i < cur_word.length(); i++){
      if(!s.empty()){
        if(s.top() ==cur_word[i]){
          s.pop();
          continue;
        }
        else
          s.push(cur_word[i]);
          continue;
      }
      s.push(cur_word[i]);
    }
    if(s.empty()) answer++;
  }

  cout << answer << '\n';

  return 0;
}