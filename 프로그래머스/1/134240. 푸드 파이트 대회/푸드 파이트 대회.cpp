#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i=1; i<food.size(); i++)
    {
        if(food[i]/2 > 0)
        {
            for(int j=0; j<food[i]/2; j++)
            {
                answer += to_string(i);            
            }   
        }
    }
    int size = answer.size();
    answer += "0";
    for(int i=size-1; i>=0; i--)
    {
        answer += answer[i];
    }
    
    return answer;
}