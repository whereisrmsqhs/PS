#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<list>
using namespace std;

int N;
String expression;
list<int> orders, nums;
list<char> operators;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  cin >> expression;

  for(int i = 0; i < N; i+=2){
    nums.push_back(expression[i]-'0');
  }
  for(int i = 1; i < N-1; i+=2){
    operators.push_back(expression[i]);
  }

  for(int i = 1; i <= N/3; i++){
    orders.push_back(i);
  }

  do {
    int sum = 0;
    for(int i = 0; i < orders.size(); i++){
      if(orders[i] == N/2) continue;
      
      
    }

  } while(next_permutation(orders.begin(), orders.end()));
}