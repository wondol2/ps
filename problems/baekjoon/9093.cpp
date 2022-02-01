#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    char s[1001];
    cin.getline(s, 1001);
    vector<char> v;

    for(int i=0; s[i]; ++i){
        if(s[i] == ' '){
            while(!v.empty()){
                cout << v.back();
                v.pop_back();
            }
            cout << " ";
        }
        else{
            v.push_back(s[i]);
        }
    }
    while(!v.empty()){
        cout << v.back();
        v.pop_back();
    }
    cout << "\n";
    return;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
