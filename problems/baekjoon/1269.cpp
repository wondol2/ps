/**
 *  Author: wondol
 *  E-mail: wonsuk0227@gmail.com
**/

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


void solve(){
    int N, M; cin >> N >> M;
    int intersection = 0;
    set<int> A;
    for(int i=0; i<N; ++i){
        int num; cin >> num;
        A.insert(num);
    }
    for(int i=0; i<M; ++i){
        int num; cin >> num;
        if(A.find(num) != A.end()){
            intersection++;
        }
    }
    cout << N + M - 2*intersection << "\n";
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

