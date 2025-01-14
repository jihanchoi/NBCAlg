#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int count = my_string.size();
    for(int i=count-n; i< count; i++)
    {
        answer += my_string[i];
    }
    return answer;
}