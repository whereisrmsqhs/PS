#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int N, first_idx, last_idx;
vector<string> s;
string word, temp;

bool cmp(string a, string b){
  if(a.length() == b.length()){
    for(int i = 0; i < a.length(); i++){
      if(a[i] < b[i]){
        return a[i] < b[i];
      }
      else if(b[i] < a[i]){
        return b[i] > a[i];
      }
    }
  }
  return a.length() < b.length();
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> word;
    temp="";
    for(int j = 0; j < word.length(); j++){
      if(!isalpha(word[j])){
        temp += word[j];
        if(j == word.length() - 1 || isalpha(word[j+1])){
          while(temp.length() >= 2 && temp[0] == '0'){
            temp = temp.substr(1);
          }
          s.push_back(temp);
          temp="";
        }

      }
    }
  }
  sort(s.begin(), s.end(), cmp);
  for(int i = 0; i < s.size(); i++){
    cout << s[i] << "\n";
  }
  return 0;
}