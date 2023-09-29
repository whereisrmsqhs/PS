#include<iostream>
#include<cstring>
using namespace std;

string word;

bool FirstCondition(){
  if(word.find('a') != word.npos || word.find('e') != word.npos || word.find('i') != word.npos || word.find('o') != word.npos || word.find('u') != word.npos){
    return true;
  }
  else return false;
}

bool AllMo(int idx){
  int cnt = 0;
  int num_mo = 0;
  while(cnt < 3){
    char target = word[idx-cnt];
    if(target=='a' || target=='e' || target=='i' || target=='o' || target=='u')
      num_mo++;
    cnt++;
  }
  if(num_mo==3) return true;
  else return false;
}

bool AllJa(int idx){
  int cnt = 0;
  while(cnt < 3){
    char target = word[idx-cnt];
    if(target=='a' || target=='e' || target=='i' || target=='o' || target=='u')
      return false;
    cnt++;
  }
  return true;
}

bool SecondCondition(){
  if(word.length() >= 3){
    for(int i = 2; i < word.length(); i++){
      if(AllMo(i) || AllJa(i)){
        return false;
      }
    }
  }
  return true;
}

bool FinalCondition(){
  if(word.length() >= 2){
    for(int i = 1; i < word.length(); i++){
      if(word[i]==word[i-1]){
        if(word[i]=='e' || word[i]=='o'){
          continue;
        }
        else{
          return false;
        }
      }
    }
  }
  return true;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while(1){
    cin >> word;
    if(word == "end") break;

    bool first = FirstCondition();
    bool second = SecondCondition();
    bool third = FinalCondition();

    if(first && second && third){
      cout << "<" << word << "> is acceptable.\n";
      continue; 
    }
    cout << "<" << word << "> is not acceptable.\n";
  }
}