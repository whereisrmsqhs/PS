#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 101;
#define MIN -1;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, input;
  vector<int> A, B;

  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> input;
    A.push_back(input);
  }
  for(int i = 0; i < N; i++) {
    cin >> input;
    B.push_back(input);
  }

  int result = 0;
  for(int i = 0; i < N; i++) {
    int a_min_idx = min_element(A.begin(), A.end()) - A.begin();
    int a_min = *min_element(A.begin(), A.end());

    int b_min_idx = max_element(B.begin(), B.end()) - B.begin();
    int b_min = *max_element(B.begin(), B.end());

    A[a_min_idx] = MAX;
    B[b_min_idx] = MIN;

    result += (a_min * b_min);
  }
  cout << result << "\n";
  return 0;
}