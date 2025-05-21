#include <string>
#include <vector>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    vector<int> vec;
    int q1Start = 0;
    int q1End = queue1.size() - 1;
    int q2Start = queue1.size();
    int q2End = queue1.size()*2 - 1;
    int size = queue1.size() * 2;
    long long sum1 = 0, sum2 = 0;
        
    for (int q1: queue1) {
        sum1 += q1;
        vec.push_back(q1);
    }
    
    for (int q2: queue2) {
        sum2 += q2;
        vec.push_back(q2);
    }

    while (answer <= size * 2) {
        if (sum1 < sum2) {
            sum1 += vec[(++q1End) % size];
            sum2 -= vec[(q2Start++) % size];
        } else if (sum1 > sum2) {
            sum1 -= vec[(q1Start++) % size];
            sum2 += vec[(++q2End) % size];
        } else return answer;
        answer++;
    }
    return -1;
}

// 같은 길이의 큐
// 2개로 나누어 계산시 시간 초과
// 삽입, 삭제를 하지 않기위해 벡터 하나를 이용 
// 위치를 이용하여 값을 계산 -> 위치 값이 사이즈를 넘어갈 경우 대비
// 특정 케이스에서 실패