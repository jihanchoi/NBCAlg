#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int SartIndex = 0, Index = 0;
    int sum = sequence[0];
    int subLen = sequence.size();
    pair<int, int> result;
    
    while (Index < sequence.size()) {
        if (sum < k){
            sum += sequence[++Index];
        }
        else if (sum == k) {
            if (Index-SartIndex < subLen) {
                subLen = Index-SartIndex;
                result = {SartIndex, Index};
            }
            else if (Index-SartIndex == subLen) {
                if (SartIndex < result.first) {
                    result = {SartIndex, Index};
                }
            }
            sum -= sequence[SartIndex++];
        } 
        else sum -= sequence[SartIndex++];
    }
    return {result.first, result.second};
}

// 배열의 첫 값(S)부터 더해가며 K와 비교
// 합 < K   -> 합에 다음 수를 더함
// 합 == K  -> 사용된 수의 합을 비교
// 합 > K   -> S+1부터 다시 시작X  -> 비효율적 S의 값을 빼기
// 반복 