#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> keyIndex;
    
    for(int i=0; i<keymap.size(); i++)
    {
        for(int j=0; j<keymap[i].size(); j++)
        {
            if(!keyIndex.count(keymap[i][j]))
               {
                   keyIndex[keymap[i][j]] = j+1;
               }
               else
               {
                   keyIndex[keymap[i][j]] = min(keyIndex[keymap[i][j]], j+1);
               }
        }
    }
    
    for(string str : targets)
    {
        int count = 0;
        for(char ch : str)
        {
            auto index = keyIndex.find(ch);
            if(index != keyIndex.end())
            {
                count += keyIndex[ch];
            }
            else
            {
                count = -1;
                break;
            }
        }
        answer.push_back(count);
    }
    
    return answer;
}