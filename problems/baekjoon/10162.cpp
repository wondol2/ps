#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int T; cin >> T;
    const int N = 3;
    int arr[N] = {300, 60, 10};

    int ans = 0;
    if(T%10 > 0) { cout << "-1\n"; return;}

    for(int i=0; i<N; ++i){
        cout << T/arr[i] << " ";
        T %= arr[i];
    }
    cout << "\n";
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
