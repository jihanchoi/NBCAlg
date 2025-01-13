#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int num = 1;
    for(int i=l; i<=r; i=i+num)
    {
        string str = to_string(i);
        bool ch = true;
        for(char c : str)
        {
            if(c!='0' && c!='5')
            {
                ch = false;
                break;
            }
        }
        if(ch)
        {
            answer.push_back(i);
            num = 5;
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}