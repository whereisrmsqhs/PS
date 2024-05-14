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
    if (a - b < 0) cout << "<" << "\n";
    else if (a - b == 0) cout << "=" << "\n";
    else if (a - b > 0) cout << ">" << "\n";
	}
	return 0;
}