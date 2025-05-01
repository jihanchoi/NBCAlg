#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare (const string &a, string &b) {
    if (a + b > b + a)
        return true;
    else
        return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    
     for (int i = 0; i < numbers.size(); i++) {
        temp.push_back(to_string(numbers.at(i)));
    }
    
    sort(temp.begin(), temp.end(), compare);
    
    for (int i = 0; i < temp.size(); i++) {
        answer += temp.at(i);
    }
    
    if (answer[0] == '0')
        return "0";
    
    return answer;
}

// 숫자를 연산하는 것이 아닌 이어붙히는 형식 -> int보다는 string이 유리? 반환값 또한 string
// 단순히 이어붙혔을 때 큰수를 기준으로 정렬 -> sort