#include <bits/stdc++.h>
using namespace std;

// #ifndef ONLINE_JUDGE
// #include "debug.h"
// #else
// #define debug(x)
// #endif

// https://algospot.com/judge/problem/read/QUADTREE


string flipbox(string s){
    string ans(1, s[0]);

    if(s.size() == 1) return ans;
    vector<int> v;
    int n;
    int x_cnt=0, bw_cnt=0;
    for (int i=0; s[i]; ++i){
        if(s[i] == 'x') x_cnt++;
        else if(x_cnt == 1) v.push_back(i);
        else bw_cnt++;

        if(bw_cnt == x_cnt*3-2){
            v.push_back(i);
            x_cnt = 1;
            bw_cnt = 0;
        }
    }
    
    vector<string> strv;
    int start = 1;
    for (auto i : v){
        strv.push_back(flipbox(s.substr(start, i-start+1)));
        start = i+1;
    }
    ans.append(strv[2]);
    ans.append(strv[3]);
    ans.append(strv[0]);
    ans.append(strv[1]);

    return ans;
}

string reversebox(string::iterator& it){
    char head = *it;
    ++it;
    if(head == 'b' || head == 'w')
        return string(1, head);
    string upperLeft = reversebox(it);
    string upperRight = reversebox(it);
    string lowerLeft = reversebox(it);
    string lowerRight = reversebox(it);
    // cout << "debug: " << string("x") + lowerLeft + lowerRight + upperLeft + upperRight << '\n';
    return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}

void solve(){
    string s;
    cin >> s;
    // cout << flipbox(s) << '\n';
    string::iterator it = s.begin();
    cout << reversebox(it) << '\n';
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
