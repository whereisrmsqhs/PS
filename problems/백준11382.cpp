#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long sum=0, temp;
  for(int i = 0; i < 3; i++){
    cin >> temp;
    sum += temp;
  }
  cout << sum << "\n";
  return 0;
}