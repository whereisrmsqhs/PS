#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  string temp;
  cin >> temp;

  int zero_blocks = 0, one_blocks = 0;

  for(int i = 0; i < temp.length(); i++){
    if(i+1 < temp.length() && temp[i]=='0' && temp[i+1]=='1'){
      zero_blocks++;
    }
    else if(i+1 < temp.length() && temp[i]=='1' && temp[i+1]=='0'){
      one_blocks++;
    }
    else if(i==temp.length()-1){
      if(temp[i]=='0') zero_blocks++;
      else one_blocks++;
    }
  }

  cout << min(zero_blocks, one_blocks) << "\n";
  return 0;
}