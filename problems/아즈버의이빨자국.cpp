/*
시간 제한	메모리 제한
3 초	1024 MB
문제
집안의 먹을 것들이 계속해서 사라지는 당신은 이웃집의 곰 아즈버(azber)를 의심하고 있다. 오늘, 당신은 드디어 결정적인 증거를 찾아냈는데, 그것은 바로 쵸코바에 찍힌 이빨 자국이었다!

당신은 아즈버가 커다란 두 송곳니로 쵸코바를 물어 여러 번 자국을 남겼으리라 생각하고 있다.

쵸코바를 수직선이라고 가정하자. 아즈버는 다음과 같은 규칙을 따라 쵸코바에 이빨 자국을 남길 수 있다.

처음에 쵸코바는 아무 자국 없이 깨끗한 상태이다.
아즈버의 송곳니 사이 간격이 
$k\ (k \gt 0)$일 때, 아즈버는 
$0$ 이상의 수 
$x$를 골라 쵸코바의 
$x$와 
$x + k$ 두 위치에 자국을 남기는 행동을 
$0$회 이상 반복할 수 있다.
같은 위치에 여러 번 자국을 남기더라도 마지막에 남긴 자국만 보인다.
당신은 쵸코바에 남겨진 이빨 자국들을 토대로, 송곳니 사이의 간격 
$k$가 될 수 있는 수치들을 모두 기록해 둔 뒤 나중에 아즈버를 만났을 때 확인해 보려고 한다.

이빨 자국들의 위치가 주어졌을 때, 아즈버의 송곳니 사이 간격이 될 수 있는 수를 모두 출력해 보자!

입력
첫째 줄에 쵸코바에 찍힌 이빨 자국의 개수 
$N$이 주어진다. 
$(2 \le N \le 4\,000)$ 

둘째 줄에 
$N$개의 이빨 자국이 찍힌 위치를 나타내는 정수 
$x_i$가 공백을 사이에 두고 오름차순으로 주어진다. 
$x_i$는 중복되지 않는다. 
$(0 \le x_i \le 10^9)$ 

출력
첫째 줄에 아즈버의 송곳니 사이 간격이 될 수 있는 수의 개수 
$K$를 출력한다.

 
$K$가 
$1$ 이상일 경우, 둘째 줄에 공백을 사이에 두고 송곳니 사이 간격이 될 수 있는 수를 오름차순으로 출력한다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  vector<long long> position(4001);
  for(int i = 0; i < N; i++){
    cin >> position[i];
  }

  if(N % 2 != 0){
    cout << 0 << '\n';
    return 0;
  }

  long long standard, cal_distance;
  int not_ans;
  int first_ans = 0;
  vector<long long> sec_ans;
  for(int i = 1; i <= N/2; i++){
    standard = position[i] - position[0];
    not_ans = 0;
    cal_distance = 0;
    for(int j = 1; j+i <= N-1; j++){
      cal_distance = position[j+i] - position[j];
      if(cal_distance != standard){
        not_ans = 1;
        break;
      }
    }
    if(not_ans == 0){
      first_ans++;
      sec_ans.push_back(standard);
    } 
  }
  sort(sec_ans.begin(), sec_ans.end());
  cout << first_ans << '\n';
  if(!sec_ans.empty()){
    for(int i = 0; i < sec_ans.size(); i++){
    cout << sec_ans[i] << ' ';
    }
    cout << "\n";
  }
  return 0;
}