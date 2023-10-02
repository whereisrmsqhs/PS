#include<iostream>
#include<cstring>
#include<stack>
#include<vector>
using namespace std;

string sentence;
vector<string> answer;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while(1){
    getline(cin, sentence);
    if(sentence==".") break;
    stack<char> s;
    for(int i = 0; i < sentence.length(); i++){
      if(sentence[i]=='(' || sentence[i]=='['){
        s.push(sentence[i]);
      }
      else if(sentence[i]==')' || sentence[i]==']'){
        if(!s.empty()){
          char temp = s.top();
          if(sentence[i]==')' && temp=='('){
            s.pop();
            continue;
          }
          else if(sentence[i]==']' && temp=='['){
            s.pop();
            continue;
          }
          else{
            //s.push(sentence[i]);
            break;
          }
        }
        else{
          s.push(sentence[i]);
          break;
        }
      }
    }
    if(s.empty()){
      answer.push_back("yes");
    }
    else{
      answer.push_back("no");
    }
  }

  for(int i = 0; i < answer.size(); i++){
    cout << answer[i] << "\n";
  }
  return 0;
}