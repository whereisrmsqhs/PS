#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int N, M;
int map[51][51], visited[51][51];

void bfs(){
  
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> map[i][j];
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(map[i][j]==2){
        bfs();
      }
    }
  }
}