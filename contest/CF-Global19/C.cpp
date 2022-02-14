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
    int arr[N-2]{};
    int n; cin >> n;
    for(int i=0; i<N-2; ++i) cin >> arr[i];
    cin >> n;
    N -= 2;
    // sort(arr, arr+N, __greater());

    long long ans = 0;
    long long remainOdd=0;
    long long money=0, newMoney=0;

    for(int i=0; i<N; ++i){
        newMoney = arr[i]/2;
        ans += newMoney;
        long long temp = newMoney;
        
        if(newMoney > 0 && remainOdd > 0){
            ans += remainOdd;
            money += remainOdd;
            remainOdd = 0;
        }

        if(arr[i]&1){
            if(money > 0){
                ++ans;
                if(remainOdd > 0){
                    ans += remainOdd;
                    money += remainOdd;
                    remainOdd = 0;
                }
            }
            else{
                remainOdd++;
            }
        }
        money += temp;

        // cout << money << " " << remainOdd << "\n";
        // debug(ans)
    }
    if(remainOdd > 0) ans = -1;
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
