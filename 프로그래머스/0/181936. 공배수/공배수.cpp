#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    int a = number % n == 0 ? 1 : 0;
    int b = number % m == 0 ? 1 : 0;
    answer = a * b == 1 ? 1 : 0;
    return answer;
}