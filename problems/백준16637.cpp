// 모르면 일단 배워...

#include<iostream>
#include<list>
#include<cstring>
#include<algorithm>
using namespace std;

int N;
string expression;
vector<int> nums;
vector<char> ops;
int ans = -987654321;

int Calculate(char op, int a, int b){
  if(op == '+'){
    return a+b;
  }
  else if(op=='-'){
    return a-b;
  }
  else if(op=='*'){
    return a*b;
  }

  return -1;
}

void solve(int idx, int sum){
  if(idx == nums.size()-1){
    ans = max(ans, sum);
    return;
  }
  solve(idx+1, Calculate(ops[idx], sum, nums[idx+1]));
  if(idx < nums.size() - 2){
    solve(idx+2, Calculate(ops[idx], sum, Calculate(ops[idx+1], nums[idx+1], nums[idx+2])));
  }

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for (int i = 0; i < N; i++) {
        char ch;
        cin >> ch;
        (i & 1) ? ops.push_back(ch) : nums.push_back(ch - '0');
    }

  solve(0, nums[0]);
  cout << ans << "\n";
  return 0;
}