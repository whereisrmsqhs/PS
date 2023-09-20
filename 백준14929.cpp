#include<iostream>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
 
  if(n==1){
    cout << 0 << "\n";
    return 0;
  }

  vector<int> array(100000);
  array[0]=0;
  for(int i = 1; i <= n; i++){
    cin >> array[i];
  }
  vector<int> psum(100000);
  psum[0]=0;
  for(int i = 1; i <= n; i++){
    psum[i] = psum[i-1] + array[i];
  }

  long long result = 0;
  for(int i = 1; i < n; i++){
    result += (array[i] * (psum[n]-psum[i]));
  }

  cout << result << "\n";
  return 0;

}