#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = s.size();
    
    for (int step = 1; step < s.size() / 2 + 1; step++) {
        string compressed = "";
        string prev = s.substr(0, step);
        int cnt = 1;
        
        for (int j = step; j < s.size(); j+=step) {
            if (prev == s.substr(j, step)) cnt++;
            else {
                compressed += (cnt >= 2 ? to_string(cnt) + prev : prev);
                prev = s.substr(j, step);
                cnt = 1;
            }
        }
        compressed += (cnt >= 2 ? to_string (cnt) + prev : prev);
        answer = min((int)compressed.size(), answer);
    }
    
    return answer;
}