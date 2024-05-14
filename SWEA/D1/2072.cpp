#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
    int n, sum = 0;
		cout << "#" << test_case << " ";
		for (int i = 0; i < 10; i++) {
			cin >> n;
			if (n % 2 != 0) sum += n;
		}
		cout << sum << "\n";
	}
	return 0;
}