#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int recursion(int n, int r, int c){
    if(n == 0) return 1;

    int len = 1 << (n-1);
    int square = len*len;
    int ret = 0;

    if(r < len && c < len){
        ret += 0;
        ret += recursion(n-1, r, c);
    }
    else if(r < len && c >= len){
        ret += square;
        ret += recursion(n-1, r, c-len);
    }
    else if(r >= len && c < len){
        ret += square*2;
        ret += recursion(n-1, r-len, c);
    }
    else if(r >= len && c >= len){
        ret += square*3;
        ret += recursion(n-1, r-len, c-len);
    }

    return ret;
}


void solve(){
    int N, r, c; cin >> N >> r >> c;
    cout << recursion(N, r, c) - 1 << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
