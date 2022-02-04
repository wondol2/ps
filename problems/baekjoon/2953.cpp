#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a[4];
    int b[5];
    for(int i=0; i<5; ++i){
        for(int j=0; j<4; ++j){
            cin >> a[j];
        }
        b[i] = accumulate(a, a+4, 0);
    }
    int maxval = *max_element(b, b+5);
    int maxidx = 0;
    for(int i=0; i<5; ++i){
        if(maxval == b[i]) maxidx = i+1;
    }
    cout << maxidx << " " << maxval << "\n";
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
