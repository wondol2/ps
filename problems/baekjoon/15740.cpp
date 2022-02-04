#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string a, b; cin >> a >> b;

    int aminus = (a[0]=='-'?1:0), bminus = (b[0]=='-'?1:0);
    int asize = a.size()-aminus, bsize = b.size()-bminus;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int plus[10100]{};

    for(int i=0; i<max(asize, bsize); ++i){
        if(i<asize){
            if(aminus) plus[i] -= (a[i]-'0');
            else plus[i] += (a[i]-'0');
        }
        if(i<bsize){
            if(bminus) plus[i] -= (b[i]-'0');
            else plus[i] += (b[i]-'0');
        }
    }
    int minusFlag = -1;
    for(int i=max(asize,bsize)-1; i>=0; --i){
        if(minusFlag == -1 && plus[i] == 0) continue;
        if(minusFlag == -1 && plus[i] > 0){ minusFlag = 0; break; }
        else if(minusFlag == -1 && plus[i] < 0){ minusFlag = 1; break; }
    }
    if(minusFlag == -1){
        cout << "0\n";
        return;
    }
    for(int i=0; i<max(asize,bsize); ++i){
        if(minusFlag){
            while(plus[i] > 0){
                plus[i] -= 10;
                plus[i+1] += 1;
            }
            while(plus[i] <= -10){
                plus[i] += 10;
                plus[i+1] -= 1;
            }
        }
        else{
            while(plus[i] < 0){
                plus[i] += 10;
                plus[i+1] -= 1;
            }
            while(plus[i] >= 10){
                plus[i] -= 10;
                plus[i+1] += 1;
            }
        }
    }
    if(minusFlag) cout << "-";
    int flag = 0;
    for(int i=10100-1; i>=0; --i){
        if(flag == 0 && plus[i] == 0) continue;
        flag = 1;
        cout << abs(plus[i]) << "";
    }
    cout << "\n";
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
