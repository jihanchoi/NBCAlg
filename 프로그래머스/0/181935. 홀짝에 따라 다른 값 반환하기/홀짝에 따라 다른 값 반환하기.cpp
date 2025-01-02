#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = n; i > 0; i -= 2){
        if(i%2){
            answer += i;
        }else{
            answer += pow(i, 2);
        }
    }
    
    return answer;
}