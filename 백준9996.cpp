#include<iostream>
#include<string>
using namespace std;

int main(){
  int N;
  cin >> N;

  string pattern;
  cin >> pattern;

  int star_idx = pattern.find('*');
  string left = pattern.substr(0, star_idx);
  string right = pattern.substr(star_idx+1);

  string input;
  for(int i = 0; i < N; i++){
    cin >> input;
    if(input.length() < left.length() + right.length()){
      cout << "NE" << '\n';
    }
    else if(input.find(left)==0){
      string tmp = input.substr(input.size()-right.size());
      if(tmp==right){
        cout << "DA" << '\n';
      }
      else{
        cout << "NE" << '\n';
      }
    }
    else {
      cout << "NE" << '\n';
    }
  }


}