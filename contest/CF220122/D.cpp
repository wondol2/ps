#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[27][27][27]; // 26*26 = 676
    memset(arr, -1, 27*27*27*4);
    vector<string> s(N);
    for(int i=0; i<N; ++i){
        cin >> s[i];
        int sz = s[i].size();

        if(sz == 2)
            arr[s[i][0]-'a'][s[i][1]-'a'][26] = i;
        else if(sz == 3)
            arr[s[i][0]-'a'][s[i][1]-'a'][s[i][2]-'a'] = i;
    }

    for(int i=0; i<N; ++i){
        string a = s[i];
        int sz = a.size();
        if(sz == 1 ||
           (sz == 2 && a[0] == a[1]) ||
           (sz == 3 && a[0] == a[2]) ){
            cout << "YES\n"; return;
        }
        
        if(sz == 2){
            if(arr[a[1]-'a'][a[0]-'a'][26] > i){
                cout << "YES\n"; return;
            }
            for(int j=0; j<26; ++j){
                if(arr[j][a[1]-'a'][a[0]-'a'] > i){
                    cout << "YES\n"; return;
                }
            }
        }
        if(sz == 3){
            if(arr[a[2]-'a'][a[1]-'a'][a[0]-'a'] > i){
                cout << "YES\n"; return;
            }
            if(arr[a[1]-'a'][a[0]-'a'][26] > i){
                cout << "YES\n"; return;
            }
        }
    }
    cout << "NO\n"; return;
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
