#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector<int> ans(max(a.size(), b.size())+2, 0);

    for(int i=0; i<ans.size(); ++i){
        int temp = 0;
        if(i < a.size()) temp += a[i] - '0';
        if(i < b.size()) temp += b[i] - '0';
        ans[i] += temp;
        ans[i+1] += ans[i]/10;
        ans[i] %= 10;
    }
    reverse(ans.begin(), ans.end());
    int flag = 0;
    for(int i=0; i<ans.size(); ++i){
        if(flag == 0 && ans[i] == 0) continue;
        else {
            flag = 1;
            cout << ans[i];
        }
    }
    if(flag == 0) cout << 0;
    cout << "\n";
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
