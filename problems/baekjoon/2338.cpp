#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string a, b; cin >> a >> b;
    int plus[2021]{}, minus[2021]{}, multiply[2021]{};
    bool aminus = (a[0]=='-');
    bool bminus = (b[0]=='-');
    int asize = (int)a.size() - (aminus ? 1 : 0);
    int bsize = (int)b.size() - (bminus ? 1 : 0);
    bool bigger = asize >= bsize;
    if(asize == bsize){
        for(int i=0; i<asize; ++i){
            if(a[aminus?i+1:i] != b[bminus?i+1:i]){
                bigger = a[aminus?i+1:i] > b[bminus?i+1:i];
                break;
            }
        }
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i=0; i<max(asize,bsize); ++i){
        if((aminus==1&&bminus==1) || (aminus==0&&bminus==0)){
            if(i<asize) plus[i] += a[i]-'0';
            if(i<bsize) plus[i] += b[i]-'0';

            if(i<asize) minus[i] += bigger?(a[i]-'0'):-(a[i]-'0');
            if(i<bsize) minus[i] += bigger?-(b[i]-'0'):(b[i]-'0');
        }
        else{
            if(i<asize) plus[i] += bigger?(a[i]-'0'):-(a[i]-'0');
            if(i<bsize) plus[i] += bigger?-(b[i]-'0'):(b[i]-'0');

            if(i<asize) minus[i] += a[i]-'0';
            if(i<bsize) minus[i] += b[i]-'0';
            
        }
    }

    for(int i=0; i<asize; ++i){
        for(int j=0; j<bsize; ++j){
            multiply[i+j] += (a[i]-'0')*(b[j]-'0');
        }
    }

    // carrying
    int plusidx=0, minusidx=0, multiplyidx=0;
    for(int i=0; i<2020; ++i){
        plus[i]+=20; plus[i+1]-=2;
        plus[i+1] += plus[i] / 10;
        plus[i] %= 10;
        minus[i]+=20; minus[i+1]-=2;
        minus[i+1] += minus[i] / 10;
        minus[i] %= 10;
        multiply[i+1] += multiply[i] / 10;
        multiply[i] %= 10;

        if(plus[i]) plusidx = i;
        if(minus[i]) minusidx = i;
        if(multiply[i]) multiplyidx = i;
    }

    if(plus[plusidx] != 0 &&((aminus==1&&bminus==1)
                           ||(aminus==1&&bigger)||(bminus==1&&!bigger))) {
        cout << "-";
    }
    for(int i=plusidx; i>=0; --i) cout << plus[i];
    cout << "\n";

    if(minus[minusidx] != 0 &&((aminus==1&&bminus==0)
                             ||(aminus==1&&bminus==1&&bigger)
                             ||(aminus==0&&bminus==0&&!bigger))) {
        cout << "-";
    }
    for(int i=minusidx; i>=0; --i) cout << minus[i];
    cout << "\n";

    if(multiply[multiplyidx] != 0 &&(aminus^bminus)) {
        cout << "-";
    }
    for(int i=multiplyidx; i>=0; --i) cout << multiply[i];
    cout << "\n";

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
