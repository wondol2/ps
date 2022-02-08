#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int x[3], y[3];
    for(int i=0; i<3; ++i) cin >> x[i] >> y[i];

    int ans = 0;
    if(x[0] == x[1]){
        // 첫 두점을 잇는 직선이 y축에 평행할때
        // 직선보다 오른쪽/왼쪽 에있을시 x좌표 비교를 통한 정답 결정
        if(x[2] == x[0]) ans = 0;
        else if(x[2] > x[0]){
            if(y[0] > y[1]) ans = 1;
            else ans = -1;
        } 
        else{
            if(y[0] > y[1]) ans = -1;
            else ans = 1;
        }
    }
    else{
        double a = (double) (y[1]-y[0]) / (x[1]-x[0]);
        double b = (double) (y[0]*x[1]-y[1]*x[0]) / (x[1]-x[0]);
        double yy = a*x[2]+b;

        // 첫 두점을 잇는 일차방정식으로 나온값(yy)와 주어진 y값 비교
        // 직선보다 위/아래 에있을시 x좌표 비교를 통한 정답 결정
        if(yy > y[2]){
            if(x[0] < x[1]) ans = -1;
            else ans = 1;
        }
        else if(yy < y[2]){
            if(x[0] < x[1]) ans = 1;
            else ans = -1;
        }
        else{
            ans = 0;
        }
    }
    cout << ans << "\n";
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
