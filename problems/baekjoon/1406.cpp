#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string str; cin >> str;
    int N = str.size();
    list<char> li;
    for(int i=0; i<N; ++i) li.push_back(str[i]);
    int M; cin >> M;
    cin.ignore(256, '\n');
    auto it = li.end();

    while(M--){
        string cmd;
        getline(cin, cmd);

        if(cmd[0] == 'L'){
            if(it != li.begin()) --it;
        }
        else if(cmd[0] == 'D'){
            if(it != li.end()) ++it;
        }
        else if(cmd[0] == 'B'){
            if(it != li.begin()){
                auto it2 = it;
                --it;
                li.erase(it);
                it = it2;
            }
        }
        else if(cmd[0] == 'P'){
            char c = cmd[2];
            li.insert(it, c);
        }
    }
    for(auto i=li.begin(); i!=li.end(); ++i){
        cout << *i;
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
