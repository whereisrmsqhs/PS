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
      if(sentence[i] >= 65 && sentence[i] <= 90){
        sentence[i]+=13;
        if(sentence[i] > 90){
          sentence[i] = sentence[i]-90+64;
        }
      }
      else {
        sentence[i]+=13;
        if(sentence[i] > 122 && sentence[i] <=127){
          sentence[i] = sentence[i]-122+96;
        }
        else if(sentence[i] < 0){
          sentence[i] = sentence[i]-128+102;
        }
      }
    }
  }

  cout << sentence << '\n';
  return 0;
}