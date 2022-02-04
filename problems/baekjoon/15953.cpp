#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, b; cin >> a >> b;

    int money1[6] = {500,300,200,50,30,10};
    int rank1[6] = {1,2,3,4,5,6};

    int money2[5] = {512,256,128,64,32};
    int rank2[5] = {1,2,4,8,16};

    int ans = 0;
    if(a!=0){
        for(int i=0; i<6; ++i){
            a-=rank1[i];
            if(a <= 0){
                ans += money1[i];
                break;
            }
        }
    }
    if(b!=0){
        for(int i=0; i<5; ++i){
            b-=rank2[i];
            if(b <= 0){
                ans += money2[i];
                break;
            }
        }
    }

    cout << ans*10000 << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
