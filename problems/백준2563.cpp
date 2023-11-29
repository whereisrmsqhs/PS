#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  int map[100][100] = {0,};

  int x, y;
  int result = 0;
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> x >> y;

    for(int j = x-1; j < x + 9; j++) {
      for(int k = y-1; k < y + 9; k++) {
        if(map[j][k] == 0) {
          map[j][k] = 1;
          result++;
        }
      }
    }
  }

  cout << result << "\n";
  return 0;
}