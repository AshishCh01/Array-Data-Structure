// for postives only
#include <iostream>
#include <vector>
using namespace std;

void longestSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    int left = 0;
    int sum = 0;
    int maxLen = 0;
    for (int right = 0; right < n; right++) {
        sum += nums[right];
        while (sum > k) {
            sum -= nums[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
    }
    cout << "Length = " << maxLen << endl;
}

// int longestSubarray(vector<int>& nums, int k) {
//     int n = nums.size();
//     int left, right = 0;
//     int sum = nums[0];
//     int maxLen = 0;
//     while (right < n) {
//         while (left <= right && sum > k) {
//             sum -= nums[left];
//             left++;
//         }
//         if (sum == k) {
//             maxLen = max(maxLen, right - left + 1);
//         }
//         right++;
//         if(right < n) sum += nums[right];
//     }
//     return maxLen;
// }

int main() {

    vector<int> nums = {1, 2, 1, 1, 1, 3, 2};
    int k = 3;

    longestSubarray(nums, k);
    cout << longestSubarray(nums, k);
    return 0;
}