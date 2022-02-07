#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int A,B,C,D; cin>>A>>B>>C>>D;
    for(int i=0; i<3; ++i){
        int num; cin >> num;
        int ans = 0;

        int t = num % (A+B);
        if(t==0) t = A+B;
        if(t<=A) ++ans;

        t = num % (C+D);
        if(t==0) t = C+D;
        if(t<=C) ++ans;
        
        cout << ans << "\n";
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
