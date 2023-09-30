#include<iostream>
#include<cstring>
using namespace std;

int N, M;
char temp;
int map[100][100];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  memset(map, -1, sizeof(map));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> temp;
      if(temp=='c'){
        map[i][j] = 0;
        continue;
      }
      map[i][j]=-1;
    }
  }

  int cnt_add;
  for(int i = 0; i < N; i++){
    cnt_add = 0;
    for(int j = 0; j < M; j++){
      if(map[i][j]==0){
        cnt_add=2;
        continue;
      }
      map[i][j]+=cnt_add;
      if(map[i][j] != -1) cnt_add++;
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cout << map[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}