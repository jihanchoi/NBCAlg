#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    sort(number.begin(), number.end());
    
    for(int a=0; a<number.size()-2; a++)
    {
        if(number[a] > 0) break;
        for(int b=a+1; b<number.size(); b++)
        {
            for(int c=b+1; c<number.size(); c++)
            {
                if(number[a] + number[b] + number[c] == 0)
                {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}