#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long sum(std::vector<int> &a){
    long long ans = 0;
    for(auto x : a) ans += x;
    return ans;
}

void solve(){

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
