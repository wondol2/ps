#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int num = 0, cnt = 0;;
    for(int i=0; i<4; ++i){
        cin >> num;
        if(!num) ++cnt;
    }

    switch(cnt){
        case 0: cout << "E\n"; return;
        case 1: cout << "A\n"; return;
        case 2: cout << "B\n"; return;
        case 3: cout << "C\n"; return;
        case 4: cout << "D\n"; return;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=3;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
