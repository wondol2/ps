#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

struct node{int val; int idx;};

void solve(){
    int N; cin >> N;
    int arr[N+1]{};
    for(int i=1; i<=N; ++i) cin >> arr[i];
    
    stack<node> s;
    s.push({INT_MAX,0});

    for(int i=1; i<=N; ++i){
        while(!s.empty() && s.top().val < arr[i]){
            s.pop();
        }
        cout << s.top().idx << " "; flush()
        s.push({arr[i], i});
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
