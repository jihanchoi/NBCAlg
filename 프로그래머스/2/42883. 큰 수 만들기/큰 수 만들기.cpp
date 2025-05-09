#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int num = number.length() - k;
    int idx = 0;
    
    for(int i = 0; i < num; i++){
        char maxChar = number[idx];
        int maxIdx = idx;

        for(int j = idx; j <= k+i; j++){
            if(maxChar < number[j]){
                maxChar = number[j];
                maxIdx = j;
            }
        }
        answer += maxChar;
        idx = maxIdx + 1;
    }
    return answer;
}

// number 중 가장 큰 수를 기준 (단 뒤에 남은 수가 길이-(k+1)개 이상)
// 길이-(k+2)-> 줄어들면서 반복
// 남은 수와 남은 길이가 같은 경우 계산 필요X