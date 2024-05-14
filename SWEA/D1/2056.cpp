#include<iostream>
#include<cstring>
using namespace std;

bool isNum(string y, string m, string d) {
  for (int i = 0; i < y.length(); i++) {
    if (!isdigit(y[i])) {
      return false;
    }
  }
  for (int i = 0; i < m.length(); i++) {
    if (!isdigit(m[i])) {
      return false;
    }
  }
  for (int i = 0; i < d.length(); i++) {
    if (!isdigit(d[i])) {
      return false;
    }
  }
  return true;
}

bool checkMonth(string month) {
  int m = stoi(month);
  if (m >= 1 && m <= 12) return true;
  else return false;
}

bool checkDay(string month, string day) {
  int m = stoi(month);
  int d = stoi(day);
  switch (m)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (d >= 1 && d <= 31) return true;
    else return false;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (d >= 1 && d <= 30) return true;
    else return false;
    break;
  case 2:
    if (d >= 1 && d <= 28) return true;
    else return false;
    break;
  default:
    return false;
  }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
    cout << "#" << test_case << " ";

    string input;
    cin >> input;

    string year = input.substr(0, 4);
    string month = input.substr(4, 2);
    string day = input.substr(6, 2);

    if (isNum(year, month, day) && checkMonth(month) && checkDay(month, day)) {
      cout << year << "/" << month << "/" << day << "\n";
    } else {
      cout << -1 << "\n";
    }
	}
	return 0;
}