#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int dif = 0;
    int same = 0;
    char ch = s[0];
    
    for(int i=0; i<s.size();i++)
    {
        if(s[i] == ch)
        {
            same++;
        }else
        {
            dif++;
        }
        if(same == dif)
        {
            same = 0;
            dif = 0;
            answer++;
            ch = s[i+1];
        }
        if(i == s.size()-1)
        {
            if(same != 0 || dif != 0)
            {
                answer++;
            }
        }
    }
    
    return answer;
}