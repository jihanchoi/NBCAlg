#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int go, int to, vector<vector<int>>& answer) {
    if (n == 1) {// 쌓인 원판이 한개라면 
        answer.push_back({go, to});
        return ;
    }
    hanoi(n-1, go, 6-go-to, answer);// n-1 개의 원판을 시작점, 목표점을 제외한 곳으로 이동
    hanoi(1, go, to, answer);// n번째 원판을 목표지점으로 이동
    hanoi(n-1, 6-go-to, to, answer);// n-1 개의 원판을 목표점으로 이동
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 3, answer);
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