#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    int arr[4]={0,1,2,3};

    for(int i=0; i<(int)s.size(); ++i){
        if(s[i] == 'A') swap(arr[1],arr[2]);
        if(s[i] == 'B') swap(arr[3],arr[2]);
        if(s[i] == 'C') swap(arr[1],arr[3]);
    }

    for(int i=1; i<=3; ++i){
        if(arr[i] == 1){
            cout << i << "\n";
            return;
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
