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
    long long x[3], y[3];
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
        /*
        double로 했을시 반례
        9896 9922
        9936 9884
        9916 9903

        */
        // double a = (double) (y[1]-y[0]) / (x[1]-x[0]);
        // double b = (double) (y[0]*x[1]-y[1]*x[0]) / (x[1]-x[0]);
        // double yy = a*x[2]+b;
        // cout << (x[1]-x[0]) << "\n";
        // debug(a) debug(b) debug(yy)
        // cout.precision(60);
        // cout << fixed << a << "\n";
        // cout << fixed << b << "\n";
        // cout << fixed << yy << "\n";
        // if(yy > y[2]){
        //     if(x[0] < x[1]) ans = -1;
        //     else ans = 1;
        // }
        // else if(yy < y[2]){
        //     if(x[0] < x[1]) ans = 1;
        //     else ans = -1;
        // }
        // else{
        //     ans = 0;
        // }
        long long aa = y[1]-y[0];
        long long bb = y[0]*x[1]-y[1]*x[0];
        long long yy = (aa*x[2]+bb) * (x[1]>x[0]?1:-1);

        if(yy > y[2] * abs(x[1]-x[0])){
            if(x[0] < x[1]) ans = -1;
            else ans = 1;
        }
        else if(yy < y[2] * abs(x[1]-x[0])){
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
