#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    deque<int> d;
    while(N--){
        string cmd; int val;
        cin >> cmd;
        if(cmd == "push_front"){
            cin >> val;
            d.push_front(val);
        }
        else if(cmd == "push_back"){
            cin >> val;
            d.push_back(val);
        }
        else if(cmd == "pop_front"){
            if(!d.empty()){
                cout << d.front() << "\n";
                d.pop_front();
            }
            else{
                cout << -1 << "\n";
            }
        }
        else if(cmd == "pop_back"){
            if(!d.empty()){
                cout << d.back() << "\n";
                d.pop_back();
            }
            else{
                cout << -1 << "\n";
            }
        }
        else if(cmd == "size"){
            cout << d.size() << "\n";
        }
        else if(cmd == "empty"){
            cout << (d.empty() ? 1 : 0) << "\n";
        }
        else if(cmd == "front"){
            if(!d.empty()){
                cout << d.front() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
        else if(cmd == "back"){
            if(!d.empty()){
                cout << d.back() << "\n";
            }
            else{
                cout << -1 << "\n";
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
