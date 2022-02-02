#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s;
    while(getline(cin, s)){
        int lower=0, upper=0, digit=0, space=0;
        for(int i=0; s[i]; ++i){
            if(s[i] == ' ') ++space;
            else if(s[i] >= '0' && s[i] <= '9') ++digit;
            else if(s[i] >= 'a' && s[i] <= 'z') ++lower;
            else if(s[i] >= 'A' && s[i] <= 'Z') ++upper;
        }
        if(lower+upper+digit+space > 0)
            cout << lower << " " << upper << " " << digit << " " << space << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
