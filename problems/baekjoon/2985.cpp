#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(a+b == c){
        cout << a << "+" << b << "=" << c << "\n"; return;
    }
    if(a-b == c){
        cout << a << "-" << b << "=" << c << "\n"; return;
    }
    if(a*b == c){
        cout << a << "*" << b << "=" << c << "\n"; return;
    }
    if(a == b + c){
        cout << a << "=" << b << "+" << c << "\n"; return;
    }
    if(a == b - c){
        cout << a << "=" << b << "-" << c << "\n"; return;
    }
    if(a == b * c){
        cout << a << "=" << b << "*" << c << "\n"; return;
    }

    if(a%b==0 && a/b == c){
        cout << a << "/" << b << "=" << c << "\n"; return;
    }
    if(b%c==0 && a == b / c){
        cout << a << "=" << b << "/" << c << "\n"; return;
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
