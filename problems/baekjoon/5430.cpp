#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string cmd; cin >> cmd;
    int N; cin >> N;
    
    deque<int> d;
    char c;
    int a;
    cin >> c; // [
    for(int i=0; i<N; ++i){
        cin >> a >> c; // num, or num]
        d.push_back(a);
    }
    while(getchar() != '\n');

    int reverse = 0;
    int flag = 0;
    for(int i=0; i<cmd.size(); ++i){
        if(cmd[i] == 'R'){
            reverse = !reverse;
        }
        else if(cmd[i] == 'D'){
            if(d.empty()) {flag = 1; break;}
            else if(!reverse) d.pop_front();
            else d.pop_back();
        }
    }
    if(flag == 1) cout << "error\n";
    else{
        cout << "[";
        while(!d.empty()){
            if(!reverse){
                cout << d.front();
                if(d.size() > 1) cout << ",";
                d.pop_front();
            }
            else{
                cout << d.back();
                if(d.size() > 1) cout << ",";
                d.pop_back();
            }
        }
        cout << "]\n";
    }
}

int main(){
    // ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
