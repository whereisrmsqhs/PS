#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, k, l;
int arr[101][101]; // 맵 정보
vector<pair<int, int>> info; // 방향 회전 정보

// 처음에는 오른쪽을 보고 있으므로 (동, 서, 남, 북)
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int turn(int direction, char c) {
  
}