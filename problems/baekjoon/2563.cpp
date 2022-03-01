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
    int N; cin >> N;
    int arr[100][100]{};
    for(int i=0; i<N; ++i){
        int x, y; cin >> x >> y;

        for(int a=x; a < x+10; ++a){
            for(int b=y; b < y+10; ++b){
                arr[a][b] = 1;
            }
        }
    }
    int* arr2 = (int *)arr;
    cout << accumulate(arr2, arr2+10000, 0) << "\n";
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
