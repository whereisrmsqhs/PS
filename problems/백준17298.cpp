#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int N;
vector<int> arr;
stack<int> s;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> N;

  int ans[N];
  int temp;
  for(int i = 0; i < N; i++){
    cin >> temp;
    arr.push_back(temp);
  }

  ans[N-1] = -1;
  s.push(arr[N-1]);
  for(int i = N-2; i >= 0; i--){
    while(!s.empty()){
      if(arr[i] < s.top()){
        ans[i] = s.top();
        s.push(arr[i]);
        break;
      }
      else{
        s.pop();
      }
    }
    if(s.empty()){
      s.push(arr[i]);
      ans[i]=-1;
    }
  }

  for(int i = 0; i < N; i++){
    cout << ans[i] << " ";
  }
  cout << "\n";
  return 0;

}