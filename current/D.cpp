#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    string s; cin >> s;

    list<int> l;
    auto iter = l.begin();
    l.insert(iter, 0);

    for(int i=0; i<N; ++i){
        if(s[i] == 'L'){
            l.insert(--iter, i+1);
        }
        else{
            l.insert(iter, i+1);
        }
    }
    for(auto x : l){
        cout << x << " ";
    }
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
