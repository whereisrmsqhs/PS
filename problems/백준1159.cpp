#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  string input_name;
  int first_name[26] = {0, };
  for(int i = 0; i < N; i++){
    cin >> input_name;
    first_name[input_name[0]-97]++;
  }

  vector<char> answer;
  for(int i = 0; i < 26; i++){
    if(first_name[i] >= 5){
      answer.push_back(i+97);
    }
  }

  if(answer.empty()){
    cout << "PREDAJA" << '\n';
    return 0;
  }

  for(int i = 0; i < answer.size(); i++){
    cout << answer[i];
  }
  cout << '\n';
  return 0;
}