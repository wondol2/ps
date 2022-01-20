#include <bits/stdc++.h>
using namespace std;

int N, dp[10001];
string arr;

int min_diff(int start){
    if(start == N) return 0;
    if(start >= N-2) return 1000000;

    int &ret = dp[start];
    if(ret != -1) return ret;
    ret = 1000000;

    int temp = arr[start+1] - arr[start];
    for(int i=start+2; i<start+5 && i<N; ++i){
        if(arr[i]-arr[i-1] == temp){
            if(temp == 0)
                ret = min(ret, min_diff(i+1)+1);
            else if(abs(temp) == 1)
                ret = min(ret, min_diff(i+1)+2);
            else
                ret = min(ret, min_diff(i+1)+5);
        }
        else break;
    }
    temp = arr[start+1];
    for(int i=start+2; i<start+5 && i<N; ++i){
        if(((i-start) & 1) && arr[i] == temp)
            ret = min(ret, min_diff(i+1)+4);
        else if(!((i-start) & 1) && arr[i] == arr[start])
            ret = min(ret, min_diff(i+1)+4);
        else
            break;
    }
    ret = min(ret, min_diff(start+3)+10);
    ret = min(ret, min_diff(start+4)+10);
    ret = min(ret, min_diff(start+5)+10);
    return ret;
}

void solve(){
    cin >> arr;
    N = arr.size();
    memset(dp, -1, 10001*4);
    cout << min_diff(0) << "\n";
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
