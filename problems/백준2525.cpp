#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int A, B, M;
  cin >> A >> B;
  cin >> M;

  int result_min = (B + M) % 60;
  int to_be_add = (B+M) / 60;
  int result_hour = A + to_be_add;
  result_hour = result_hour % 24;

  cout << result_hour << " " << result_min << "\n";
  return 0;
}