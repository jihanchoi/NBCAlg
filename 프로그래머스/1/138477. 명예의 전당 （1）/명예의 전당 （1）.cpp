#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    multiset<int, greater<int>> set;
    multiset<int>::iterator iter;
    
    for(int scor : score)
    {
        set.insert(scor);
        iter = set.begin();
        
        if(set.size() < k)
        {
            std::advance(iter, set.size() - 1);
            answer.push_back(*iter);
        }else
        {
            std::advance(iter, k-1);
            answer.push_back(*iter);
        }
    }
    
    return answer;
}