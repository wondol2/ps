#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long hc, dc; cin >> hc >> dc;
    long long hm, dm; cin >> hm >> dm;
    long long k, w, a; cin >> k >> w >> a;

    for(int i=0; i<=k; ++i){ // i to weapon, (k-i) to armour
        long long newhc = hc+(k-i)*a;
        long long newdc = dc+i*w;
        long long newhm = hm;

        long long c = newhc/dm + (newhc%dm>0?1:0);
        long long m = newhm/newdc + (newhm%newdc>0?1:0);
        // cout << "!!!" << i << " " << (k-i) << "\n";
        // cout << "###" << c << " " << m << "\n";
        if(c >= m){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
