#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    char s[60];
    cin >> s;
    int arr[27] = {0,};
    for(int i=0; s[i]; i++){
        arr[s[i]-'a'] ++;
    }
    for(int i=0; i<26; i++){
        for(int j=0; j<arr[i]; j++)
            cout << char(i + 'a');
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
