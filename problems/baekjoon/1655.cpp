#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// struct op{
//     bool operator()(int a, int b){
//         if(abs(a) == abs(b)) return a > b;
//         return abs(a) > abs(b);
//     }
// };

void solve(){
    int N; cin >> N;
    int num;
    priority_queue<int> lheap, rheap;

    cin >> num;
    int mid = num;
    cout << num << "\n";
    for(int i=1; i<N; ++i){
        cin >> num;

        num <= mid ? lheap.push(num) : rheap.push(-num);

        if(lheap.size() > rheap.size()){
            rheap.push(-mid);
            mid = lheap.top();
            lheap.pop();
        }

        if(lheap.size() + 1 < rheap.size()){
            lheap.push(mid);
            mid = -rheap.top();
            rheap.pop();
        }
        cout << mid << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
