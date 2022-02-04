#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a[10], b[10];
    for(int i=0; i<10; ++i) cin >> a[i];
    for(int i=0; i<10; ++i) cin >> b[i];

    int A=0, B=0;
    int flag = 0;
    for(int i=0; i<10; ++i){
        if(a[i] > b[i]) A+=3, flag=1;
        else if(a[i] < b[i]) B+=3, flag=-1;
        else ++A, ++B;
    }

    cout << A << " " << B << "\n";
    if(A>B) cout << "A\n";
    else if(A<B) cout << "B\n";
    else{
        if(flag == 1) cout << "A\n";
        else if(flag == -1) cout << "B\n";
        else cout << "D\n";
    }
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
