#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int dx[8] = {-2, -1, 2, 1, -2, -1, 2, 1};
int dy[8] = {-1, -2, 1, 2, 1, 2, -1, -2};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input;
  cin >> input;
  int x = input[0] - 'a';
  int y = input[1] - '1';

  int answer = 0;
  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || nx > 7 || ny < 0 || ny > 7) {
      continue;
    } else {
      answer++;
    }
  }

  cout << answer << "\n";
  return 0;
}