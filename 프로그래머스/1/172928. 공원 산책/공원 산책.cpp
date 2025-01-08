#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int x=0;
    int y=0;
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[i].length(); j++){
            if(park[i][j]=='S'){
                x=i;
                y=j;
                goto EXIT;
            }
        }
    }
    EXIT:
    for(string r :routes){
        int x2 =0,y2 =0;
        for(int c=r[2]-'0'; c>0; c--)
        {
            switch(r[0]){
                case 'N':
                    x2 += -1;
                    break;
                case 'S':
                    x2 += 1;
                    break;
                case 'W':
                    y2 += -1;
                    break;
                case 'E':
                    y2 += 1;
            }
            if(x+x2<0||x+x2>=park.size()||y+y2<0||y+y2>=park[0].length()||park[x+x2][y+y2]=='X'){
                x2=0;
                y2=0;
                break;
            }
        }
        x += x2;
        y += y2;
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}