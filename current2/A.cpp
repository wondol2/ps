#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N;
    string s;
    cin >> N >> s;

    if(s.size() == 1 || s == "01" || s == "10"){
        cout << "YES\n"; return;
    }
    cout << "NO\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
