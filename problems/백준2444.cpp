#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    int space_count = N - i-1;
    for(int j = 0; j < space_count; j++){
      cout << " ";
    }
    for(int j = 0; j < 1+i*2; j++){
      cout << "*";
    }
    cout << "\n";
  }

  for(int i = 0; i < N-1; i++){
    int space_count = i+1;
    for(int j = 0; j < space_count; j++){
      cout << " ";
    }
    for(int j = 0; j < 1+(N-1-space_count)*2; j++){
      cout << "*";
    }
    cout << "\n";
  }
}