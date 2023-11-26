#include<iostream>
using namespace std;

int main() {
  int N, M;

  int matrix1[100][100], matrix2[100][100], result_matrix[100][100];

  cin >> N >> M;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> matrix1[i][j];
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> matrix2[i][j];
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      result_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cout << result_matrix[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}