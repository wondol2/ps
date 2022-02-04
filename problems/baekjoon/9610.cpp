#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[5]{};
    int axis = 0;
    for(int i=0; i<N; ++i){
        int x, y; cin >> x >> y;
        if(!x || !y){
            ++axis;
            continue;
        }
        if(x>0 && y>0) arr[1]++;
        if(x<0 && y>0) arr[2]++;
        if(x<0 && y<0) arr[3]++;
        if(x>0 && y<0) arr[4]++;
    }
    for(int i=1; i<=4; ++i){
        cout << "Q" << i << ": " << arr[i] << "\n";
    }
    cout << "AXIS: " << axis << "\n";
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
