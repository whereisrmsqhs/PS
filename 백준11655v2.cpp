#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string sentence;
  getline(cin, sentence);

  for(int i = 0; i < sentence.size(); i++){
    if(isalpha(sentence[i])){
      if((sentence[i] >= 65 && sentence[i] <= 77) || (sentence[i] >= 97 && sentence[i] <= 109)){
        sentence[i]+=13;
      }
      else {
        sentence[i]-=13;
      }
    }
  }

  cout << sentence << '\n';
  return 0;
}