#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int K; cin >> K;
    vector<int> v;
    int a;

    for(int i=0; i<K; ++i){
        cin >> a;
        if(a == 0) v.pop_back();
        else v.push_back(a);
    }
    int sum = 0;
    for(int i=0; i<v.size(); ++i){
        sum += v[i];
    }
    cout << sum << "\n";
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
