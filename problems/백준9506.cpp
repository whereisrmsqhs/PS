#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int input;
  while(1) {
    cin >> input;
    if(input==-1) break;

    vector<int> elements;
    int total = 0;
    for(int i = 1; i < input; i++) {
      if(input % i == 0) {
        elements.push_back(i);
        total += i;
      }
    }

    if (total != input) {
      cout << input << " is NOT perfect." << "\n";
      continue;
    }

    cout << input << " = ";
    for(int i = 0; i < elements.size(); i++) {
      if(i != elements.size()-1) {
        cout << elements[i] << " + ";
        continue;
      }
      cout << elements[i] << "\n";
    }
  }
  return 0;
}