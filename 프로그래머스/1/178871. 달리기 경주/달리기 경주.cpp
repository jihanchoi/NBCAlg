#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    map<int, string> ismap;
    map<string, int> simap;
    
    for(int i=0; i<players.size(); i++){
        ismap[i] = players[i];
        simap[players[i]] = i;
    }
    
    for(string call : callings){
        int num;
        string player;
        
        num = simap[call];
        player = ismap[num-1];
        ismap[num-1] = ismap[num];
        ismap[num] = player;
        
        simap[call] = num-1;
        simap[player] = num;
    }
    
    for(int i=0; i<ismap.size(); i++){
        answer.push_back(ismap[i]);
    }
    return answer;
}