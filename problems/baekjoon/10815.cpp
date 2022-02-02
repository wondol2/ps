#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N;
    set<int> s;

    for(int i=0; i<N; ++i){
        int num; cin >> num;
        s.insert(num);
    }
    cin >> M;
    for(int i=0; i<M; ++i){
        int num; cin >> num;
        if(s.find(num) != s.end()){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
    }
    cout << "\n";
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
