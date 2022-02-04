#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int m, d; cin >> m >> d;
    int flag = -2;
    if(m < 2) flag = -1;
    else if(m > 2) flag = 1;
    else{
        if(d < 18) flag = -1;
        else if(d > 18) flag = 1;
        else flag = 0;
    }

    if(flag == -1) cout << "Before\n";
    else if(flag == 0) cout << "Special\n";
    else cout << "After\n";
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
