#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int num = 0;
    
    for(auto vec : queries){
        num = 0;
        for(int i=vec[0]; i<=vec[1]; i++){
            if(vec[2] < arr[i]){
                if(arr[i] < num || num == 0){
                    num = arr[i];
                }
            }
        }
        if(num != 0){
            answer.push_back(num);
        }else{
            answer.push_back(-1);
        }
    }
    
    return answer;
}