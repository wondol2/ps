#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int arr[N];
    int minval = INT_MAX;
    int xs = 0, xe = 0;
    int ys = 0, ye = 0;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        ye = max(ye, arr[i]);
        minval = min(minval, arr[i]);
    }
    xs = ys = minval;

    int finalx = minval, finaly = ye;
    while(ys <= ye){
        // int ymid = ys/2 + ye/2;
        int ymid = (ys-ye)/2 + ye;
        
        xs = minval;
        xe = ymid;
        int flag = 0;
        // cout << "1: " << ys << " " << ye << " " << xs << " " << xe << "\n";
        while(xs < xe){
            // cout << "2: " << ys << " " << ye << " " << xs << " " << xe << "\n";
            int xmid = (xs-xe)/2 + xe;
            // cout << "3: " << ymid << " " << xmid << "\n";
            int cnt = 0;
            int incnt = 0, outcnt = 0;
            for(int i=0; i<N; ++i){
                if(arr[i] >= xmid && arr[i] <= ymid){
                    ++incnt;
                }
                else{
                    ++outcnt;
                }
                if(cnt < K-1 && incnt > outcnt){
                    ++cnt;
                    incnt = outcnt = 0;
                }
            }
            // cout << "4: " << cnt << " " << incnt << " " << outcnt<< "\n";
            if(cnt < K && incnt > outcnt){
                ++cnt;
            }

            if(cnt == K){
                // cout << "###\n";
                flag = 1;
                finalx = xmid;
                xs = xmid;
            }
            else{
                // cout << "$$$\n";
                xe = xmid - 1;
            }
        }

        if(flag){
            finaly = ymid;
            if(ys == ye) break;
            ye = ymid - 1;
        }
        else{
            if(ys == ye) break;
            ys = ymid;
        }
    }


    // finalx = xs, finaly = ys;
    cout << finalx << " " << finaly << "\n";
    int cnt = 0;
    int incnt = 0, outcnt = 0;
    int lastidx = 0;
    for(int i=0; i<N; ++i){
        if(arr[i] >= finalx && arr[i] <= finaly){
            ++incnt;
        }
        else{
            ++outcnt;
        }
        if(cnt < K-1 && incnt > outcnt){
            ++cnt;
            incnt = outcnt = 0;
            cout << lastidx+1 << " " << i+1 << "\n";
            lastidx = i+1;
        }
    }
    cout << lastidx+1 << " " << N << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
