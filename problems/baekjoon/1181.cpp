#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

bool compare(string s1, string s2){
    if(s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}

void solve(){
    int N; cin >> N;
    string s[20001];
    for(int i=0; i<N; ++i) cin >> s[i];
    sort(s, s+N, compare);
    int val = unique(s, s+N) - s;
    for(int i=0; i<val; ++i)
        cout << s[i] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
