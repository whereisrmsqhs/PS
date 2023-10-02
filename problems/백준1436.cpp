#include<iostream>
#include<cstring>
using namespace std;;

int N, cnt;
string answer;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  cnt = 0;

  for(int i = 666; cnt < N ;i++){
    if(to_string(i).find("666") != to_string(i).npos){
      answer = to_string(i);
      cnt++;
    }
  }
  cout << answer << "\n";
  return 0;
}