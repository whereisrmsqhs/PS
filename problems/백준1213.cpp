#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string name;
  cin >> name;

  int alphabet[26] = {0,};
  for(int i = 0; i < name.length(); i++){
    alphabet[name[i]-65]++;
  }

  int odd_num = 0;
  int odd_alphabet_idx;
  for(int i = 0; i < 26; i++){
    if(alphabet[i] % 2 == 1){
      odd_num++;
      odd_alphabet_idx=i;
    }
  }

  if(odd_num >= 2){
    cout << "I'm Sorry Hansoo" << '\n';
    return 0;
  }

  vector<char> answer;
  for(int i = 0; i < 26; i++){
    if(alphabet[i] != 0){
      int temp = alphabet[i] / 2;
      for(int j = 0; j < temp; j++){
        answer.push_back(i+65);
        alphabet[i]--;
      }
    }
  }
  if(odd_num==1){
    answer.push_back(odd_alphabet_idx+65);
    alphabet[odd_alphabet_idx]--;
  }
  for(int i = 25; i >= 0; i--){
    if(alphabet[i]!=0){
      for(int j = 0; j < alphabet[i]; j++){
        answer.push_back(i+65);
      }
    }
  }

  for(int i = 0; i < answer.size(); i++){
    cout << answer[i];
  }

  cout << '\n';
  return 0;

}