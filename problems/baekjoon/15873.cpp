#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;

    if(s.size() == 4){
        cout << "20\n";
    }
    else if(s.size() == 2){
        cout << s[0]-'0'+s[1]-'0' << "\n";
    }
    else{
        if(s[1] == '0'){
            cout << 10 + s[2]-'0' << "\n";
        }
        else{
            cout << 10 + s[0]-'0' << "\n";
        }
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
