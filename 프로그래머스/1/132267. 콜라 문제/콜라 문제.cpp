#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a)
    {
        int i = n / a;
        int j = i * b;
        n = (n % a) + j;
        answer += j;
    }
    return answer;
}