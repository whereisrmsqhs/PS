#include<iostream>
using namespace std;

int total, product_num, price, num;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> total;
  cin >> product_num;

  int result = 0;
  for(int i = 0; i < product_num; i++){
    cin >> price >> num;
    result += price * num;
  }
  
  if(result==total){
    cout << "Yes" << "\n";
  }
  else {
    cout << "No" << "\n";
  }

  return 0;
}