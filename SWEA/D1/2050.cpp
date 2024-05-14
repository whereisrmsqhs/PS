#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	string T;

	cin>>T;

  for (int i = 0; i < T.length(); i++) {
    T[i] = toupper(T[i]); 
    cout << (int) (T[i] - 'A') + 1 << " "; 
  }
  cout << "\n";
	return 0;
}