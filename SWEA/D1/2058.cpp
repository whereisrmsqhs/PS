#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

  string num = to_string(T);
  int sum = 0;
  for (int i = 0; i < num.length(); i++) {
    sum += (num[i] - 48);
  }
  cout << sum << "\n";
	return 0;
}