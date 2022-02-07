#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int tc = 1;
    while(true){
        int n; cin >> n;
        if(n==0) return;
        n *= 3;
        int isOdd = 0;
        if(n&1) {
            n+=1;
            isOdd = 1;
        }
        n/=2;
        n*=3;
        n/=9;

        cout << tc++ << ". " << (isOdd?"odd ":"even ") << n << "\n";
    }
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
