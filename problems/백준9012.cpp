#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int N, e;
string parenthesis;
vector<string> answer;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i < N; i++){
    e = 0;
    stack<char> s;
    cin >> parenthesis;

    for(int j = 0; j < parenthesis.length(); j++){
      if(parenthesis[j]=='('){
        s.push('(');
      }
      else if(parenthesis[j]==')'){
        if(s.empty()){
          answer.push_back("NO");
          e = 1;
          break;
        }
        else if(!s.empty()){
          s.pop();
        }
      }
    }
    if(e==0 && s.empty()){
      answer.push_back("YES");
    }
    else if(!s.empty()){
      answer.push_back("NO");
    }
  }

  for(int i = 0; i < answer.size(); i++){
    cout << answer[i] << "\n";
  }
  return 0;


}