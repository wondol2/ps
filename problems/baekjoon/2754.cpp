#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    double score = 0;

    if(s[0] == 'A') score = 4.0;
    if(s[0] == 'B') score = 3.0;
    if(s[0] == 'C') score = 2.0;
    if(s[0] == 'D') score = 1.0;
    if(s[0] == 'F') score = 0.0;

    if(s.size() > 1 && s[1] == '+') score += 0.3;
    if(s.size() > 1 && s[1] == '-') score -= 0.3;
    cout.precision(1);
    cout << fixed << score << "\n";
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
