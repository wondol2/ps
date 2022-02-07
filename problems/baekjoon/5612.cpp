#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int num; cin >> num;
    int ans = num;
    int flag = 0;
    while(N--){
        int a, b; cin >> a >> b;
        num = num + a - b;
        if(num < 0) flag = 1;
        ans = max(ans, num);
    }
    if(flag == 1) ans = 0;
    cout << ans << "\n";
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
