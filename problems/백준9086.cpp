#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int N;
  cin >> N;

  string s;
  for(int i = 0; i < N; i++){
    cin >> s;
    cout << s[0]  << s[s.size()-1] << "\n";
  }
  return 0;
}