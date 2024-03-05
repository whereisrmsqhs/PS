#include<iostream>
#include<vector>
#define MAX 50
using namespace std;

int map[MAX][MAX];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int left_turn(int cd) {
  int search_direction = cd - 1;
  if (search_direction < 0) {
    search_direction = 3;
  }
  return search_direction;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  memset(map, -1, sizeof(map));

  int mapx, mapy;
  cin >> mapx >> mapy;

  int hx, hy, hd;
  cin >> hx >> hy >> hd;
  for (int i = 0; i < mapx; i++) {
    for (int j = 0; j < mapy; j++) {
      int temp;
      cin >> temp;
      map[i][j] = temp;
    }
  }

  int answer = 0;
  int current_direction =  hd;
  while(1) {
    int search_cnt = 0;
    int search_direction = current_direction;
      cout << hx << " " << hy << "\n";
    while(search_cnt < 4) {
      search_direction = left_turn(search_direction);
      int nx = hx + dx[search_direction];
      int ny = hy + dy[search_direction];

      if (nx < 0 || nx >= mapx || ny < 0 || ny >= mapy) {
        search_cnt++;
        continue;
      }
      if (map[nx][ny] == 1 || map[nx][ny] == 2) {
        search_cnt++;
        continue;
      }

      if (map[nx][ny] == 0) {
        map[hx][hy] = 2;
        hx = nx;
        hy = ny;
        current_direction = search_direction;
        answer++;
        break;
      }
    }

    if (search_cnt == 4) {
      int tx = hx + dy[current_direction];
      int ty = hy + dx[current_direction];
    
      if (map[tx][ty] == 2) {
        hx = tx;
        hy = ty;
      }
      else break;
    }
  }

  cout << answer+1 << "\n";
  return 0;


}