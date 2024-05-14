#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
    cout << "#" << test_case << " ";
    int n, min = -1;
    for (int i = 0; i < 10; i++) {
      cin >> n;
      if (n > min) min = n;
    }
    cout << min << "\n";
	}
	return 0;
}