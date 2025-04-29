#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int start, int mid, int end, vector<vector<int>>& answer) {
    if (n == 1) {
        answer.push_back({start, end});
        return ;
    }
    hanoi(n-1, start, end ,mid, answer);
    hanoi(1, start, mid, end, answer);
    hanoi(n-1, mid, start, end, answer);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 2, 3, answer);
    return answer;
}

// 짝 2 -> 2번 부터
// 홀 3 -> 3번 부터
// 짝 4 -> 2번 부터
// 홀 5 -> 3번 부터

// N(마지막) => 1번 / 3
// N-1 => 2번 / 2 - 3
// N-2 => 4번 / 3 - 2 - 1 - 3        
// N-3 => 8번 / 2 - 3 - 1 - 2 + 4번(1번과 2번의 위치변경)
// N-4 => 16번 / 4 + 4 + 4 + 4      
// 이론상 위에 경로를 반복 단 1,2,3번의 위치는 변경됨