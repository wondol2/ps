#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long bin_to_long(string s){
    long long a = 1;
    long long ret = 0;
    for(int i=s.size()-1; i>=0; --i){
        ret += a * ((s[i]-'0')&1);
        a <<= 1;
    }
    return ret;
}

void solve(){
    string s1, s2; cin >> s1 >> s2;
    long long a = bin_to_long(s1);
    long long b = bin_to_long(s2);

    long long ans = a*b;

    int msb = 1;
    while(ans >> msb){
        ++msb;
    }

    for(int i=msb-1; i>=0; --i){
        cout << ((ans >> i) & 1);
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
