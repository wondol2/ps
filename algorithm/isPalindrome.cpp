#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


bool isPalindrome(string str){
    int strSize = str.size();
    for(int i=0; i<strSize/2; ++i){
        if(str[i] != str[strSize-i-1]) return false;
    }
    return true;
}


void solve(){
    
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
