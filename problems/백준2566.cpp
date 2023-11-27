#include<iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int matrix[9][9];

  int x, y;
  int max = -1;
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      cin >> matrix[i][j];
      if(matrix[i][j] > max) {
        max = matrix[i][j];
        x = i+1;
        y = j+1;
      }
    }
  }

  cout << max << "\n";
  cout << x << " " << y << "\n";
  return 0;
}