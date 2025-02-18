#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;
    
    for(string copybabbling : babbling)
    {
        int rebabbling = 0;
        bool possible = true;
        for(int i=0; i<copybabbling.size(); i++)
        {
            if(copybabbling.substr(i,3) == "aya" && rebabbling != 1)
            {
                i+=2;
                rebabbling=1;
            }
            else if(copybabbling.substr(i,3) == "woo" && rebabbling != 2)
            {
                i+=2;
                rebabbling=2;
            }   
            else if(copybabbling.substr(i,2) == "ye" && rebabbling != 3)
            {
                i+=1;
                rebabbling=3;
            }else if(copybabbling.substr(i,2) == "ma" && rebabbling != 4)
            {
                i+=1;
                rebabbling=4;
            }
            else
            {
                possible = false;
                break;
            }
        }
        if(possible)
        {
            answer++;
        }
    }
    return answer;
}