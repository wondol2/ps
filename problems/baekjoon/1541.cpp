#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int ans=0;
    string s; cin >> s;
    char op;
    int minusflag = 0;

    int num = 0;
    for(int i=0; s[i]; ++i){
        if(s[i] == '-'){
            ans += minusflag ? -num : num;
            num = 0;
            minusflag = 1;
            continue;
        }
        else if(s[i] == '+'){
            ans += minusflag ? -num : num;
            num = 0;
            continue;
        }
        else{
            num *= 10;
            num += s[i] - '0';
        }
    }
    ans += minusflag ? -num : num;
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
