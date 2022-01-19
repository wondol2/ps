#include <bits/stdc++.h>
using namespace std;

// #ifndef ONLINE_JUDGE
// #include "debug.h"
// #else
// #define debug(x)
// #endif

// https://algospot.com/judge/problem/read/FENCE

vector<int> height;

int fence(int left, int right){ 
    int mid = (left + right) / 2;
    
    int lvalue = fence(left, mid);
    int rvalue = fence(mid, right);

    max(lvalue, rvalue, 1);

    int cnt = 0;
    for(int i=mid; i<right; i++){
        if(height[i] >= lvalue) cnt++;
        else break;
    }


}

void solve(){
    int N; cin >> N;

    int area=0, h;
    for(int i=0; i<N; i++){
        cin >> h;
        height.push_back(h);
    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
