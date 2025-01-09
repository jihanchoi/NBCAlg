#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    pair<int, int> first = {wallpaper.size(), wallpaper[0].length()}, second = {0,0};
    
    for(int i=0; i<wallpaper.size(); i++){
        for(int j=0; j<wallpaper[i].length(); j++){
            if(wallpaper[i][j] == '#'){
                if(first.first > i){
                    first.first = i;
                }
                if(second.first < i){
                    second.first = i;
                }
                
                if(first.second > j){
                    first.second = j;
                }
                if(second.second < j){
                    second.second = j;
                }
            }
        }
    }
    answer.push_back(first.first);
    answer.push_back(first.second);
    answer.push_back(second.first+1);
    answer.push_back(second.second+1);
    return answer;
}