#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int P, K;

	cin >> P >> K;

  if (P >= K) {
    cout << (P - K + 1) << "\n";
  } else if (P < K) {
    cout << (999 - K + P + 1) << "\n";
  }
	return 0;
}