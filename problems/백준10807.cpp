#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
  int N, temp, target;
  cin >> N;

  unordered_map<int, int> um;
  for(int i = 0; i < N; i++){
    cin >> temp;
    um[temp]++;
  }
  cin >> target;

  cout << um[target] << "\n";
  return 0;

}