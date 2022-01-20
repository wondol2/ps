#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    char arr[200010];
    cin >> arr;
    int arrlen = 0;
    for(int i=0; arr[i]; ++i){
        arrlen ++;
    }
    int changed = 0;
    for(int i=arrlen-1; i > 0; --i){
        int a = (arr[i]-'0');
        int b = (arr[i-1]-'0');
        int c = a + b;
        if(c >= 10){
            arr[i-1] = c/10 + '0';
            arr[i] = c%10 + '0';
            changed = 1;
            break;
        }
    }
    if(changed == 0){
        arr[1] = arr[0] + arr[1] - '0';
        arr[0] = '0';
        changed = 1;
    }
    int start = 0;
    if(arr[0] == '0'){
        start = 1;
    }
    for(int i=start; i<arrlen; i++){
        cout << arr[i];
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
