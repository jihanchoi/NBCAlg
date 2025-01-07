#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    
    for(auto vec : queries){
        for(int i=vec[0]; i<=vec[1]; i++){
            if(i%vec[2] == 0){
                answer[i] += 1;
            }
        }
    }
        
    return answer;
}