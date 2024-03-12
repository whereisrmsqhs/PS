#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Rotate90Degree(vector<vector<int>> key) {
  int n = key.size();
  vector<vector<int>> n_key(key.size(), vector<int>(key.size()));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      n_key[j][n - i - 1] = key[i][j];
    }
  }
  return n_key;
}

bool check(vector<vector<int>> newLock) {
  int lockLength = newLock.size() / 3;
  for (int i = lockLength; i < lockLength * 2; i++) {
    for (int j = lockLength; j < lockLength * 2; j++) {
      if (newLock[i][j] != 1) {
        return false;
      }
    } 
  }
  return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
  int n = lock.size(); 
  int m = key.size();

  // 3배 크기의 lock을 준비하고 중앙에는 원래 lock값 복사
  vector<vector<int>> newLock(n*3, vector<int>(n*3));
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      newLock[x+n][y+n] = lock[x][y];
    }
  }

  for (int rotate = 0; rotate < 4; rotate++) {
    key = Rotate90Degree(key);
    // 비교할 key의 제일 왼쪽 상단의 모서리 값의 위치는 최대 n * 2이면 충분하다.
    for (int x = 0; x < n * 2; x++) {
      for (int y = 0; y < n * 2; y++) {
        for (int i = 0; i < m; i++) {
          for (int j = 0; j < m; j++) {
            newLock[x+i][y+j] += key[i][j];
          }
        }
        if (check(newLock)) return true;
        for (int i = 0; i < m; i++) {
          for (int j = 0; j < m; j++) {
            newLock[x+i][y+j] -= key[i][j];
          }
        }
      }
    }
  }
  return false;
}