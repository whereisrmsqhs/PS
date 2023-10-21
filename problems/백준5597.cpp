#include<iostream>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> v(30);
  int temp;
  for(int i = 0; i < 28; i++){
    cin >> temp;
    v[temp-1] = 1;
  }

  for(int i = 0; i < 30; i++){
    if(v[i] == 0){
      cout << i+1 << "\n";
    }
  }

}