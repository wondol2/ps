#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, cnt=0;
    set<int> s;
    for(int i=0; i<10; ++i){
        cin >> a;
        s.insert(a%42);
    }
    cout << s.size() << "\n";
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
