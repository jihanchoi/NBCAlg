#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i=1; i<=number; i++)
    {
        int count = 1;
        for(int j=1; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        
        cout << count;
        if(count > limit)
        {
            count = power;
        }
        answer += count;
    }
    
    return answer;
}