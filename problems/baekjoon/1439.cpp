#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    int arr[2]{};

    char last = 0;
    for(int i=0; s[i]; ++i){
        if(s[i] == last){
            continue;
        }
        else{
            ++arr[s[i]-'0'];
            last = s[i];
        }
    }
    cout << min(arr[0], arr[1]) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
