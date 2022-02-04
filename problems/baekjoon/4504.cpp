#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    while(true){
        int num; cin >> num;
        if(num == 0) return;

        if(num % N == 0){
            cout << num << " is a multiple of " << N << ".\n";
        }
        else{
            cout << num << " is NOT a multiple of " << N << ".\n";
        }
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
