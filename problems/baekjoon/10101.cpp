#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int arr[3];
    for(int i=0; i<3; ++i) cin >> arr[i];
    sort(arr, arr+3);

    if(accumulate(arr, arr+3, 0) != 180) cout << "Error\n";
    else if(arr[0] == 60) cout << "Equilateral\n";
    else if(arr[1] == arr[0] || arr[1] == arr[2]) cout << "Isosceles\n";
    else cout << "Scalene\n";

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
