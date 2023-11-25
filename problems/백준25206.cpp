#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double total_class = 0.0;
  map<string, double> score_value;
  string class_name, rate;
  double score, total_score = 0.0;

  score_value.insert(make_pair("A+", 4.5));
  score_value.insert(make_pair("A0", 4.0));
  score_value.insert(make_pair("B+", 3.5));
  score_value.insert(make_pair("B0", 3.0));
  score_value.insert(make_pair("C+", 2.5));
  score_value.insert(make_pair("C0", 2.0));
  score_value.insert(make_pair("D+", 1.5));
  score_value.insert(make_pair("D0", 1.0));
  score_value.insert(make_pair("F", 0.0));

  for(int i = 0; i < 20; i++) {
    cin >> class_name >> score >> rate;
    if(rate=="P") continue;

    total_score += score * score_value[rate];
    total_class += score;
  }

  cout.precision(6);
  cout << total_score / total_class << "\n";

  return 0;
}