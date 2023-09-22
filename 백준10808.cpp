#include<iostream>
#include<cstring>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  string input;
  int arr[26] = {0,};

  cin >> input;
  for(int i = 0; i < input.length(); i++){
    arr[input[i] - 97]++;
  }

  for(int n : arr){
    cout << n << " ";
  }
  cout << "\n";
  return 0;
}