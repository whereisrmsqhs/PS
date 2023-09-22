#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> kids(9);

  for(int i = 0; i < 9; i++){
    cin >> kids[i];
  }

  sort(kids.begin(), kids.end());
  
  int sum;
  do {
    sum = 0;
    for(int i = 0; i < 7; i++){
      sum += kids[i];
    }
    if(sum == 100) {
      for(int i = 0; i < 7; i++){
        cout << kids[i] << '\n';
      }
      return 0;
    }

  } while(next_permutation(kids.begin(), kids.end()));

  return 0;
}