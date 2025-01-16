#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int a = 0, b = 0;
    
    for(string str : goal)
    {
        if(cards1[a] == str)
        {
            a++;
        }else if(cards2[b] == str)
        {
            b++;
        }else
        {
            answer = "No";
            break;
        }
    }
    if(answer != "No")
    {
        answer = "Yes";
    }
    
    return answer;
}