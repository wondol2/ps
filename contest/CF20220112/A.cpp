#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n, l;
    unsigned long long int x;

    cin >> t;

    for (int tc = 1; tc<= t; tc++){
        cin >> n >> l;
        int arr[31] = {0,};
        for (int i=0; i<n; i++){
            cin >> x;
            for(int j=0; x>0; j++){
                arr[j] += x & 1;
                x >>= 1;
            }
        }
        int min_sum = 0;
        for (int i=0; i<l; i++){
            min_sum += (arr[i] > n/2 ? 1 : 0) << i;
        }
        cout << min_sum << endl;
    }

    return 0;
}
