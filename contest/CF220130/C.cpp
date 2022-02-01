#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int getright(unsigned int n, int i){
    return (n << (32-i)) >> (32-i);
}

void solve(){
    unsigned int a, b; cin >> a >> b;
    unsigned int msb = 0;
    while(a >> msb){
        ++msb;
    }

    unsigned int ans = 0;
    // for(int i=msb; i>=0; --i){
    //     cout << ((a >> i)&1) ;
    // }cout << "\n";
    // for(int i=msb; i>=0; --i){
    //     cout << ((b >> i)&1) ;
    // }cout << "\n";

    // cout << getright(a,3) - getright(b,3) << "\n";
    for(int i=msb; i>=0; --i){
        int aa = ((a >> (i-1)) & 1), bb = ((b >> (i-1)) & 1);
        if(aa > bb){
            int j = i;
            int flag = 0;
            while(j < 32 && (((b >> j) & 1) && ((a >> j) & 1))){
                ++j;
            }

            if(((b >> j) & 1) && !((a >> j) & 1)){
                if((1 << i) - getright(a,i) > getright(a,i) - getright(b,i)){
                    if(getright(a,i) >= getright(b,i)){
                        
                        ans += getright(a,i) - getright(b,i);
                        b += getright(a,i) - getright(b,i);
                    }
                }
                else{
                    ans += (1 << i) - getright(a,i);
                    a += (1 << i) - getright(a,i);
                }
            }
            else{
                if(getright(a,i) >= getright(b,i)){
                    ans += getright(a,i) - getright(b,i);
                    b += getright(a,i) - getright(b,i);
                }
            }
            break;
        }
    }
    if(a!=b) {a |= b; ++ans;}
    // cout << a << " " << b << "\n";
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
