#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;

int dx[8] = {2,1,-1,-2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

void solve(){
    long long a,b,c,d; cin>>a>>b>>c>>d;

    for(int i=0; i<8; ++i){
        long long aa = a+dx[i], bb = b+dy[i];

        for(int j=0; j<8; ++j){
            long long cc = c+dx[j], dd = d+dy[j];
            if(aa == cc && bb == dd){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
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
