#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX];


void dfs(int num, int k){
  if(k == M){
    for(int i = 0; i < M; i++){
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  else {
    for(int i = num; i <= N; i++){ // for문을 건드려야 했음... 이전 문제와 비교했을 때
      arr[k] = i;
      dfs(num, k+1);
    }
  }
}

int main(){
  cin >> N >> M;

  dfs(1, 0);
}