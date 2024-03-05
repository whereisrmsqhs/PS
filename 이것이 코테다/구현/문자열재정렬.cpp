#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string input;
  cin >> input;

  sort(input.begin(), input.end());
  string numbers = "";
  string only_text = "";
  for (int i = 0; i < input.length(); i++) {
    if (isdigit(input[i])) {
      numbers += input[i];
    }
    else {
      only_text += input[i];
    }
  }
  string answer = only_text + numbers;
  cout << answer << "\n";
  
  return 0;
}