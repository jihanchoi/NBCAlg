#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int mul = 1;
    
    for(int i=0; i<num_list.size(); i++){
        sum += num_list[i];
        mul *= num_list[i];
    }
    if(mul > pow(sum,2)){
        return 0;
    }else{
        return 1;
    }
}