#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

string s;

bool is_pal(int a, int b){
    for(int i=a; i<=b; ++i){
        if(s[i] != s[b+a-i]) return 0;
    }
    return 1;
}

void solve(){
    cin >> s;
    int cnts[26]{};

    int N = s.size();
    for(int i=0; i<N; ++i) ++cnts[s[i]-'a'];
    int ans = 0;
    for(int i=0; i<26; ++i){
        if(cnts[i]) ++ans;
    }

    set<string> pals;
    for(int i=0; i<N; ++i){
        for(int j=i; j<N; ++j){
            if(is_pal(i, j)){
                pals.insert(s.substr(i, j-i+1));
            }
        }
    }
    
    debug(pals)
    



    cout << ans << "\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
