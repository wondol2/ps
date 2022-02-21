#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 201;
bool isPrime[NUM];
void preprocess(){
    for(int i=2; i<NUM; ++i){
        if(!isPrime[i]) continue;
        for(int j=2*i; j<NUM; j+=i){
            isPrime[j] = false;
        }
    }
}

void solve(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    memset(isPrime, 1, NUM);
    preprocess();
    for(int i=a; i<=b; ++i){
        bool flag = 0;
        for(int j=c; j<=d; ++j){
            if(isPrime[i+j]){
                flag = 1; break;
            }
        }
        if(!flag){
            cout << "Takahashi\n"; return;
        }
    }
    cout << "Aoki\n";
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
