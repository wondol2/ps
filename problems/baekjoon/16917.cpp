#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, b, c, x, y; cin>>a>>b>>c>>x>>y;

    cout << min(max(x,y)*c*2, 
                min(a*x+b*y, min(x,y)*c*2 + (y>=x?(y-x)*b:(x-y)*a))) << "\n";
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
