/**
 *  Author: wondol
 *  E-mail: wonsuk0227@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    string str; cin >> str;
    set<string> s;
    int strLen = str.size();
    for(int i=0; i<strLen; ++i){
        for(int j=1; j<=strLen-i; ++j){
            string tStr = str.substr(i, j);
            s.insert(tStr);
        }
    }
    cout << s.size() << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}

