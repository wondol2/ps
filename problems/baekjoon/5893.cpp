#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    reverse(s.begin(), s.end());
    int a[1100]{};

    for(int i=0; i<s.size(); ++i){
        a[i+4] = s[i]-'0';
    }

    for(int i=0; i<1010; ++i){
        if(i<s.size()) a[i] += s[i]-'0';
        while(a[i] > 1){
            a[i] -= 2;
            a[i+1] += 1;
        }
    }
    bool flag = 0;
    for(int i=1010; i>=0; --i){
        if(!flag && !a[i]) continue;
        flag = 1;
        cout << a[i];
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
