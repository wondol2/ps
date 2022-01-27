#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    while(true){
        // char a[110]{};
        string a;
        getline(cin, a);
        int asize = a.size();
        
        // do{
        //     a[asize] = getchar();
        // } while(a[asize++] != '.');
        // getchar();
        if(asize == 1 && a[0] == '.') break;

        vector<char> v;
        int flag = 1;

        for(int i=0; i<asize; ++i){
            if(a[i] == '(' || a[i] == '[') v.push_back(a[i]);
            
            if(a[i] == ')'){
                if(v.size() > 0 && v.back() == '(') v.pop_back();
                else{ flag = 0; break; }
            }
            else if(a[i] == ']'){
                if(v.size() > 0 && v.back() == '[') v.pop_back();
                else{ flag = 0; break; }
            }
        }
        if(v.size() > 0) flag = 0;

        if(flag == 1) cout << "yes\n";
        else cout << "no\n";

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
