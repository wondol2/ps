#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int isPalindrome(string str){
    int strSize = str.size();
    for(int i=0; i<strSize/2; ++i){
        if(str[i] != str[strSize-i-1]) return i;
    }
    return -1;
}

void solve(){
    string str; cin >> str;
    map<pair<string, bool>, int> m;

    queue<pair<string, bool>> q;
    q.push({str, 0});
    m[{str, 0}] = 0;

    while(!q.empty()){
        pair<string, bool> a = q.front(); q.pop();
        string s = a.first;
        bool b = a.second;
        int cost = m[a];

        int p = isPalindrome(s);
        if(p == -1){
            cout << cost << "\n";
            return;
        }
        {
            string t = s.substr(0, p) + s[s.size()-p-1] + s.substr(p, s.size()-p);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }
        {
            string t = s.substr(0, s.size()-p) + s[p] + s.substr(s.size()-p, p);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }
        {
            string t = s.substr(0, p) + s.substr(p+1, s.size()-p-1);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }
        {
            string t = s.substr(0, s.size()-p-1) + s.substr(s.size()-p, p);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }
        {
            string t = s.substr(0, p) + s[s.size()-p-1] + s.substr(p+1, s.size()-p-1);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }
        {
            string t = s.substr(0, s.size()-p-1) + s[p] + s.substr(s.size()-p, p);
            if(m.find({t,b}) == m.end()){
                q.push({t,b});
                m[{t,b}] = cost + 1;
            }
        }

        if(b == 0){
            for(int i=p+1; i<s.size()-p-1; ++i){
                if(s[i] == s[s.size()-p-1]){
                    string t = s;
                    swap(t[i], t[p]);

                    if(m.find({t,b+1}) == m.end()){
                        q.push({t,b+1});
                        m[{t,b+1}] = cost + 1;
                    }
                }
                if(s[i] == s[p]){
                    string t = s;
                    swap(t[i], t[s.size()-p-1]);
                    if(m.find({t,b+1}) == m.end()){
                        q.push({t,b+1});
                        m[{t,b+1}] = cost + 1;
                    }
                }
            }
        }
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
