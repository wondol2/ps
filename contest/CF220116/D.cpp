#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int n;
    cin >> n;
    vector<int> wei(n);
    for(int i=0; i<n; ++i) cin >> wei[i];
    sort(wei.begin(), wei.end());

    vector<int> arr;
    int temp = -1, cnt = 0;
    for(auto x : wei){
        // debug(x)
        if(x != temp){
            if(temp != -1)
                arr.push_back(cnt);
            temp = x;
            cnt=1;
        }
        else if(x == temp){
            cnt++;
        }
    }
    arr.push_back(cnt);
    debug(arr)

    long long x_sum = 0;
    long long min_x_sum = LONG_LONG_MAX;
    int arr_size = arr.size();
    int x_idx = 0;
    for(int i=0; i<arr_size; ++i){
        x_sum += arr[i];
        long long temp = x_sum;
        int bitsum = 0;
        while(temp > 0){
            bitsum ++;
            temp >>= 1;
        }
        long long zz = x_sum - ((long long) 1 << (bitsum-1));
        if(zz < min_x_sum){
            min_x_sum = zz;
            x_idx = i+1;
        }
    }

    long long y_sum = 0;
    long long min_y_sum = LONG_LONG_MAX;
    int y_idx = 0;
    for(int i=arr_size-1; i > x_idx; --i){
        y_sum += arr[i];
        long long temp = y_sum;
        int bitsum = 0;
        while(temp > 0){
            bitsum ++;
            temp >>= 1;
        }
        long long zz = y_sum - ((long long) 1 << (bitsum-1));
        if(zz < min_y_sum){
            min_y_sum = zz;
            y_idx = i+1;
        }
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
