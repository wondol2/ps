#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

/*
    a = 10 0...0 1...1
    b = 01...01
    a|b, a|b, ..., a|b
*/
string s;
int N;
bool check(int start){
    if(start == s.size()) return true;
    
    int i=start;
    if(s[i] == '0'){
        if(i+1 >= N || s[i+1] != '1') return false;
        return check(i+2);
    }
    else{
        if(i+1 >= N || s[i+1] != '0') return false;
        i += 2;
        int cnt = 0;
        while(i+cnt < N && s[i+cnt] == '0') ++cnt;
        if(!cnt) return false;
        i += cnt;
        cnt = 0;
        while(i+cnt < N && s[i+cnt] == '1') ++cnt;
        if(!cnt) return false;

        i += cnt;
        if(cnt > 1){
            return check(i) || check(i-1);
        }
        return check(i);
    }
}

void solve(){
    cin >> s; N = s.size();
    cout << (check(0)?"YES":"NO") << "\n";
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
