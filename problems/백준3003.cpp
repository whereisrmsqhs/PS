#include<iostream>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int fixed[6] = {1, 1, 2, 2, 2, 8};
  int given[6];
  int input;
  for(int i = 0; i < 6; i++){
    cin >> input;
    given[i] = input;
  }

  for(int i = 0; i < 6; i++){
    cout << fixed[i] - given[i] << " ";
  }
  cout << "\n";
  return 0;
}