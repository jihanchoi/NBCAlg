#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int num = 0;
    for(int i : section)
    {
        if(i >= num)
        {
            num = i + m;
            answer++;
        }
    }
    return answer;
}