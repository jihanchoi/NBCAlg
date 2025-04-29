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

// 맨 밑에 있는 것 , 나머지 2가지로 나누어서 생각
// 맨 밑에 것을 끝에 도착하려면 나머지를 중간에 넣어야함
// 그럼 다시 나머지를 2개로 나누어서
// 맨 밑에 것을 끝에 도착하려면 나머지를 처음에 넣어야함 시작 지점이 다름(중간)
// 그렇다면 1 2 3, 2 1 3 다시 1 2 3을 반복
// N-1개의 즉 나머지를 중간으로 이동
// 맨 밑에 있는 것을 끝으로 이동
// 중간으로 이동시켰던 나머지를 끝으로 이동
// 재귀함수를 이용해서 나머지를 이동시켰던 것을 계산