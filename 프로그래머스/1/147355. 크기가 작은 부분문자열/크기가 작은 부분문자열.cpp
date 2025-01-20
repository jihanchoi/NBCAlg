#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int length = p.length();
    string substring;
    
    for(int i=0; i<=t.length()-length; i++)
    {
        substring = t.substr(i,length);
        cout << substring;
        if(substring <= p)
        {
            answer++;
        }
    }
    
    return answer;
}