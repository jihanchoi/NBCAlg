#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(), score.rend());
    int count = score.size() / m;
    for(int i=1; i<=count; i++)
    {
        answer += score[i*m -1] * m;
    }
    return answer;
}