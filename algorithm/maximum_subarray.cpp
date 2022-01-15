#include <bits/stdc++.h>
using namespace std;

#define ll long long

// kadane's algorithm
int maximum_subarray(int *arr, int arrlen){
    int answer = INT_MIN;
    int sum = 0;
    for (int i=0; i<arrlen; i++){
        sum += arr[i];
        if (answer < sum) answer = sum; // answer = max(answer, sum);
        if (sum < 0) sum = 0; // sum = max(sum, 0);
    }
    return answer;
}

int maximum_subarray2(vector<int>& nums){
    int n = nums.size();
    vector<int> pref(n);
    for (int i=0; i<n; i++){
        pref[i] = nums[i] + (i==0 ? 0: pref[i-1]);
    }

    int min_so_far = 0;
    int answer = INT_MIN;
    for(int i=0; i<n; i++){
        answer = max(answer, pref[i] - min_so_far);
        min_so_far = min(min_so_far, pref[i]);
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[9] = {-2, -1, -3, -4, -1, -2, -1, -5, -4};
    vector<int> v = {-2, -1, -3, -4, -1, -2, -1, -5, -4};
    vector<int> v2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maximum_subarray(arr, 9) << endl;
    cout << maximum_subarray2(v) << endl;
    cout << maximum_subarray2(v2) << endl;
    return 0;
}
