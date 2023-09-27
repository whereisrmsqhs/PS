#include<iostream>
#include<vector>
using namespace std;

int N, M, J, position;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M >> J;

  int left_point = 1;
  int right_point = M;
  int move = 0;
  for(int i = 0; i < J; i++){
    cin >> position;
    if(position >= left_point && position <= right_point){
      continue;
    }
    else if(position < left_point){
      move += left_point - position;
      right_point -= (left_point - position); 
      left_point = position;
    }
    else if(position > right_point){
      move += position - right_point;
      left_point += position - right_point; 
      right_point = position;
    }
  }
  cout << move << '\n';
  return 0;
}