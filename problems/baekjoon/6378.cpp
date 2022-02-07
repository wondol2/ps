#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    while(true){
        string s; cin >> s;
        if(s == "0") return;

        int num = 0;
        for(int i=0; i<(int)s.size(); ++i){
            num += s[i]-'0';
        }

        while(num >= 10){
            int sum = 0;
            int tmp = num;
            while(tmp){
                sum += tmp%10;
                tmp /= 10;
            }
            num = sum;
        }
        cout << num << "\n";
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
