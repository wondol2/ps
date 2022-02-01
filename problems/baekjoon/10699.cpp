#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    time_t t = time(0);

    tm* now = localtime(&t);
    now->tm_hour += 9;
    if(now->tm_hour >= 24){
        now->tm_hour-=24;
        now->tm_mday++;
    }
    int y = now->tm_year + 1900;
    int m = now->tm_mon + 1;
    int d = now->tm_mday;
    cout << y << '-' 
         << (m/10 == 0 ? "0" : "")  << m << '-'
         << (d/10 == 0 ? "0" : "")  << d << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
