#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_set>
using namespace std;

bool isPrime(int a){
    if(a <= 1) return false;
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int num = 0;
    unordered_set<int> answer;
    
    sort(numbers.begin(), numbers.end());
        
    do{
        for(int i = 1; i < numbers.size()+1; i++){
            num = stoi(numbers.substr(0, i));
            if(isPrime(num)) answer.insert(num);
        }
    }while(next_permutation(numbers.begin(), numbers.end()));

    return answer.size();
}


// 소수를 판별
// 모든 조합을 검사
// 순열 -> 모든 조합을 생성
// 자리수를 이용해 조합 가능한 모든 수 생성
