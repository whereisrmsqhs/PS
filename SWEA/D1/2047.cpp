#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	string T;
	cin>>T;

  for (int i = 0; i < T.length(); i++) {
    if (isalpha(T[i])) {
      T[i] = toupper(T[i]);
    }
  }
  cout << T << "\n";

	return 0;
}