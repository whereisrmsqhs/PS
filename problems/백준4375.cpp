// n = 3 일때
// 11 % 3 = 2
// 111 % 3 = (11 * 10) % 3 = ((11 % 3) * (10%3)) % 3

#include<iostream>
using namespace std;

int n;
int main(){
  while(cin >> n){
    int cnt = 1, ret = 1;
    while(true){
      if(cnt % n == 0){
        cout << ret << '\n';  
        break;
      }
      else{
        cnt = ((cnt * 10) + 1) % n;
        ret++;
      }
    }
  }
  return 0;
}