#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int maxSubarr(vector<int>& arr) {   // T.C - O(n^3), S.C - O(1)
    int n = arr.size();
    int maxsum = INT_MIN;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int currSum = 0;
            for (int k=i; k <= j; k++) {
                currSum += arr[k];
                maxsum = max(currSum, maxsum);
            }
        }
    }
    return maxsum;
}
int maxSubarrSum(vector<int>& arr) {    // T.C - O(n^2), S.C - O(1)
    int n = vec.size();
    int maxSum = INT_MIN;
    for (int i=0; i <n; i++) {
        int currSum = 0;
        for (int j=i; j<n; j++) {
            currSum += vec[j];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}


int main () {
    vector <int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarr(arr);
}