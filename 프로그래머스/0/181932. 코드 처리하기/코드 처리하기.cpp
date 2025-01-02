#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int i = 0; i < code.length(); i++){
        if(code[i] == '1'){
            mode = mode ? 0:1;
            continue;
        }
        if(!mode){
            if(i%2 == 0){
                answer += code[i];
            }
        }else{
            if(i%2 == 1){
                answer += code[i];
            }
        }
    }
    
    if(answer.empty()){
        answer = "EMPTY";
    }
    
    return answer;
}