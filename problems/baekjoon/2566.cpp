#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int arr[9][9];

    int maxval = -1;
    int y=0, x=0;
    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            cin >> arr[i][j];

            if(maxval < arr[i][j]){
                y = i+1, x = j+1;
                maxval = arr[i][j];
            }
        }
    }

    cout << maxval << "\n";
    cout << y << " " << x << "\n";
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
