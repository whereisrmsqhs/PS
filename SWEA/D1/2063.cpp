#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

  vector<int> v;
  int n;
	for(test_case = 1; test_case <= T; ++test_case)
	{
    cin >> n;
    v.push_back(n);
	}
  sort(v.begin(), v.end());
  cout << v[T/2] << "\n";
	return 0;
}