#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s;
    
    while(true){
        cin >> s;
        if(s == "0") return;

        bool flag = 1;
        for(int i=0; i<(int)s.size(); ++i){
            if(s[i] != s[(int)s.size()-i-1]){
                flag = 0;
                break;
            }
        }

        cout << (flag ? "yes" : "no") << "\n";
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
