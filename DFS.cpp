//
// Created by ASUS on 2023/5/19.
//
//
// Created by ASUS on 2023/5/19.
//
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

//class Solution {
//public:
//    int numTilePossibilities(string tiles) {
//
//    }
//};
char s[50];
void DFS(string strs,int step){
    static int n=strs.size();
    if(strs.size()==1){
//        cout<<strs[0]<<endl;
        s[step] = strs[0];
        for (int i = 1; i <= n; i++) {
            cout << setw(5) << s[i];  // 保留5个场宽
        }
        cout << endl;
        return;
    }
    else{
        for (int i = 0; i < strs.size(); ++i) {
//            cout<<strs[i];
            s[step] = strs[i];
            string t=strs;
            t.erase(i,1);
            DFS(t,step+1);
        }

    }
}


int main()
{
    string s={'a','b','c','d'};
    DFS(s,1);

    return 0;
}