#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int dp[102][102][102];

int w(int a, int b, int c){
    int &ret =  dp[a+50][b+50][c+50];
    if(ret != -1) return ret;
    ret = 1;

    if (a <= 0 || b <= 0 || c <= 0){
        return ret = 1;
    }
    if (a > 20 || b > 20 || c > 20){
        return ret = w(20, 20, 20);
    }
    if (a < b && b < c){
        return ret = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }

    return ret = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

void solve(){
    int a, b, c;
    memset(dp, -1, 102*102*102*4);
    while(true){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1) return;
        int ans = w(a,b,c);
        cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << "\n";
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
