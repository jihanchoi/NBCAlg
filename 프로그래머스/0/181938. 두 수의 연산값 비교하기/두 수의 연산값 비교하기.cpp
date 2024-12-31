#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int ab = stoi(to_string(a) + to_string(b));
    int _ab = 2 * a * b;
    answer = max(ab, _ab);
    return answer;
}