#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int even = 0;
    int odd = 0;
    for(int i = num_list.size()-1; i >= 0; i--){
        if(num_list[i] % 2){
            answer += num_list[i] * pow(10, odd);
            odd++;
        }else{
            answer += num_list[i] * pow(10, even);
            even++;
        }
    }
    return answer;
}