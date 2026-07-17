#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int zeroCount = 0;
    int maxLen = 0;

    for (int right = 0; right < nums.size(); right++) {

        // Include current element in the window
        if (nums[right] == 0)
            zeroCount++;

        // Shrink the window until it becomes valid
        while (zeroCount > k) {
            if (nums[left] == 0)
                zeroCount--;

            left++;
        }

        // Update the maximum window length
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout << longestOnes(nums, k);
}