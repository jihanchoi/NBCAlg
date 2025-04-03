#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    int column = 0;
    
    int h = (n + w - 1) / w; 
    
    vector<vector<int>> v(h, vector<int>(w, -1));
    
    int boxNumber =1;
    
    for(int r = 0; r <h; r++){
        if(r % 2 == 0){
            for(int c = 0; c < w && boxNumber <= n; c++){
                if(boxNumber == num){
                    column = c;
                }
                v[r][c] = boxNumber++;
            }
        }else{
            for(int c = w-1; c>=0 && boxNumber <= n; c--){
                if(boxNumber == num){
                    column = c;
                }
                v[r][c] = boxNumber++;
            }
        }
    }
    
    for(int r = 0; r<h; r++){
        if(v[r][column] < num) continue;
        else answer++;
    }
 
    return answer;
}