#include<iostream>
using namespace std;

int N, M, temp, sum=0;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  for(int i = 0; i< N; i++){
    cin >> temp;
    if(temp % M != 0){
      sum += temp;
    }
  }
  if(sum % M == 0){
    cout << 1 << "\n";
    return 0;
  }
  cout << 0 << "\n";
  return 0;
  

}