#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

// Catalan Number
void solve(){
    long long arr[31]{};
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<=30; ++i){
        for(int j=0; j<i; ++j){
            arr[i] += arr[j] * arr[i-j-1];
        }
    }
    while(true){
        int N; cin >> N;
        if(!N) return;

        cout << arr[N] << "\n";
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
