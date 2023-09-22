#include<iostream>
#include<vector>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> timeline(101);

  int start, end;
  for(int i = 0 ; i < 3 ; i++) {
    cin >> start >> end;
    for(int i = start; i < end; i++){
      timeline[i]++;
    }
  }

  int total_fee = 0;
  for(int i = 0; i <= 100; i++){
    if(timeline[i]==1){
      total_fee+=A;
    }
    else if(timeline[i]==2){
      total_fee+=2*B;
    }
    else if(timeline[i]==3){
      total_fee+=3*C;
    }
  }

  cout << total_fee << '\n';
  return 0;
}