#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photos) {
    vector<int> answer;
    
    for(vector<string> photo : photos){
        int total = 0;
        for(string inName : photo){
            auto i = find(name.begin(), name.end(), inName);
            if(i != name.end()){
                total += yearning[i - name.begin()];
            }
        }
        answer.push_back(total);
    }
    
    return answer;
}