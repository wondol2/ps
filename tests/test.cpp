#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    // int a = 1, b = 2;
    // vector<int> v1 = {1,2,3};
    // vector<int> v2 = {4,5,6,7};
    // set<int> s = {1,1,2,3,4,1,5,1,2,3, 7, 11, 13};
    // vector<int> v3 = {1,1,2,3,4,1,5,1,2,3, 7, 11, 13};
    // swap(v1,v2);
    // debug(v1)
    // debug(v2)
    // debug(s)
    // sort(v3.begin(), v3.end());
    // debug(v3)

    // cout << *lower_bound(v3.begin(), v3.end(), 2) << '\n';
    // cout << lower_bound(v3.begin(), v3.end(), 2) - v3.begin() << '\n';
    // cout << *upper_bound(v3.begin(), v3.end(), 2) << '\n';
    // cout << upper_bound(v3.begin(), v3.end(), 2) - v3.begin() << '\n';

    // cout << accumulate(v1.begin(), v1.end(), 0LL) << "\n";
    
    // cout << *s.lower_bound(7) << '\n';
    // cout << a << " " << b << '\n';

    map<int, int> m;
    cout << (m.find(1) == m.end()) << "\n";
    m[1]=5;
    cout << (m.find(1) == m.end()) << "\n";
    cout << (m[1]) << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
