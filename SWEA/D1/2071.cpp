#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
    float sum = 0, n;
    cout << "#" << test_case << " ";
    for (int i = 0; i < 10; i++) {
      cin >> n;
      sum += n;
    }
    cout << round(sum / 10) << "\n";
	}
	return 0;
}