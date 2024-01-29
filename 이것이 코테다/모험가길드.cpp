#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  vector<int> v;
  int input;
  for(int i = 0; i < N; i++) {
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(), v.end());

  int total_group = 0;
  // int current_index = 0;
  // while(current_index < N) {
  //   int current_value = v[current_index];
  //   int cmp_index = current_value + current_index - 1;
    
  //   if (cmp_index < N && v[cmp_index] == current_value) {
  //     total_group++;
  //     current_index = cmp_index+1;
  //     continue;
  //   }
  //   current_index++;
  // }
  int count = 0;
  for (int i = 0; i < N; i++) {
    count++;
    if(v[i] <= count) {
      total_group++;
      count=0;
    }
  }

  cout << total_group << "\n";
  return 0;
}