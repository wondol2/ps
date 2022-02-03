#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    vector<string> dogam(N);
    map<string, int> m;
    for(int i=0; i<N; ++i){
        cin >> dogam[i];
        m[dogam[i]] = i;
    }

    while(M--){
        string s; cin >> s;
        if(s[0] >= '0' && s[0] <= '9'){
            int num = stoi(s);
            cout << dogam[num-1] << "\n";
        }
        else{
            cout << m[s]+1 << "\n";
        }
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
