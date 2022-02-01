#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    vector<string> v;
    for(int i=0; s[i]; ++i){
        v.push_back(s.substr(i,(int)s.size()-i));
    }
    sort(v.begin(), v.end());

    for(auto x: v){
        cout << x << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
