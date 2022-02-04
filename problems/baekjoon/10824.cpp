#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long a, b, c, d; cin >> a >> b >> c >> d;

    long long t = 1;
    while(b/t) t*=10;
    a = a*t + b;
    t=1;
    while(d/t) t*=10;
    c = c*t + d;

    cout << a+c << "\n";

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
