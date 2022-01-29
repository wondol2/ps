#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif



void solve(){
    int N; cin >> N;
    int num;
    vector<int> heap;
    heap.push_back(-1);

    for(int i=0; i<N; ++i){
        cin >> num;
        if(num == 0){ // pop
            if(heap.size() == 1) { cout << "0\n"; continue; }
            cout << heap[1] << "\n";
            heap[1] = heap.back();
            heap.pop_back();

            int idx = 1;
            while(idx < heap.size()){
                if(idx*2 >= heap.size()) break;
                int newidx = 0;
                if(idx*2+1 >= heap.size()) newidx = idx*2;
                else newidx = heap[idx*2] < heap[idx*2+1] ? idx*2 : idx*2+1;

                if(heap[idx] <= heap[newidx]) break;

                swap(heap[idx], heap[newidx]);
                idx = newidx;
            }
        }
        else{ // push
            int idx = heap.size();
            heap.push_back(num);
            while(idx > 1 && heap[idx/2] > heap[idx]){
                swap(heap[idx/2], heap[idx]);
                idx /= 2;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
