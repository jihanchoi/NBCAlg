#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a)
    {
        int i = (n/a) * b;
        n = (n % a) + i;
        answer += i;
    }
    return answer;
}