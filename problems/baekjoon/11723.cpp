#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    set<int> s;
    set<int> all;

    for(int i=1; i<=20; ++i) all.insert(i);

    while(N--){
        string str; cin >> str;
        if(str == "add"){
            int n; cin >> n;
            s.insert(n);
        }
        else if(str == "remove"){
            int n; cin >> n;
            s.erase(n);
        }
        else if(str == "check"){
            int n; cin >> n;
            if(s.find(n) != s.end()) cout << "1\n";
            else cout << "0\n";
        }
        else if(str == "toggle"){
            int n; cin >> n;
            if(s.find(n) != s.end()) s.erase(n);
            else s.insert(n);
        }
        else if(str == "all"){
            s = all;
        }
        else if(str == "empty"){
            s.clear();
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
