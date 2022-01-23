#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    // int N; cin >> N;
    int a, b;
    for(; ;){
        cin >> a >> b;
        if(!a && !b) return;
        cout << a+b << "\n";
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
