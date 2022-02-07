#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;

    int arr[5] = {0,1,2,3,4};

    for(int i=0; s[i]; ++i){
        if(s[i] == 'A') swap(arr[1], arr[2]);
        if(s[i] == 'B') swap(arr[1], arr[3]);
        if(s[i] == 'C') swap(arr[1], arr[4]);
        if(s[i] == 'D') swap(arr[2], arr[3]);
        if(s[i] == 'E') swap(arr[2], arr[4]);
        if(s[i] == 'F') swap(arr[3], arr[4]);
    }
    int small = 0, big = 0;
    for(int i=1; i<=4; ++i){
        if(arr[i] == 1) small = i;
        if(arr[i] == 4) big = i;
    }
    cout << small << "\n" << big << "\n";
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
