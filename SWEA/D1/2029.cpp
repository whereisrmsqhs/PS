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
    int a, b;
    cin >> a >> b;
    cout << (a / b) << " " << (a % b) << "\n";
	}
	return 0;
}