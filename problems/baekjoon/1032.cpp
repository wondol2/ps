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
    int N; cin >> N;
    string s[N];
    for(int i=0; i<N; ++i) cin >> s[i];
    int len = s[0].size();
    for(int i=0; i<len; ++i){
        char t = s[0][i];
        int flag = 1;
        for(int j=1; j<N; ++j){
            if(s[j][i] != t){
                flag = 0;
                break;
            }
        }
        if(flag) cout << t;
        else cout << "?";
    }
    cout << "\n";
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
