#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a == b){
        if(a == c){
            return (a+b+c) * (pow(a,2) + pow(b,2) + pow(c,2)) * (pow(a,3) + pow(b,3) + pow(c,3));
        }else{
            return (a+b+c) * (pow(a,2) + pow(b,2) + pow(c,2));
        }
    }else{
        if(a != c){
            if(b != c){
                return (a+b+c);
            }else{
                return (a+b+c) * (pow(a,2) + pow(b,2) + pow(c,2));
            }
        }else{
            return (a+b+c) * (pow(a,2) + pow(b,2) + pow(c,2));
        }
    }
}