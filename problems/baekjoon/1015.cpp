#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int N; cin >> N;
    pair<int, int> arr[N];
    for(int i=0; i<N; ++i){
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr, arr+N);

    int order[N]{};

    for(int i=0; i<N; ++i){
        order[arr[i].second] = i;
    }
    for(int i=0; i<N; ++i){
        cout << order[i] << " ";
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
