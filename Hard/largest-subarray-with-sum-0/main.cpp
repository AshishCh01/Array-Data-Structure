#include <iostream>
#include <vector>
using namespace std;

// int largestSubarraySumZero(vector<int>& arr) {
//     int n = arr.size();
//     int maxi = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             int sum = 0;
//             for(int k = i; k <= j; k++) {
//                 sum += arr[k];
//             }
//             if(sum == 0) {
//                 maxi = max(maxi, j - i + 1);
//             }
//         }
//     }
//     return maxi;
// }

void largestSubarraySumZero(vector<int>& arr) {
    int n = arr.size();
    int maxi = 0;
    int start = -1;
    int end = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if(sum == 0) {
                int len = j - i + 1;
                if(len > maxi) {
                    maxi = len;

                    start = i;
                    end = j;
                }
            }
        }
    }
     cout << "Length = " << maxi << endl;
    cout << "Subarray: ";
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {15,-2,2,-8,1,7,10,23};
    // cout << largestSubarraySumZero(arr);
    largestSubarraySumZero(arr);
    return 0;
}
