#include <bits/stdc++.h>
using namespace std;
int atMost(vector<int>& nums, int k) {
    // If k is negative, no such subarrays exist
    if (k < 0) return 0;

    int left = 0;
    int sum = 0;
    int count = 0;

    // Traverse the array using right pointer
    for (int right = 0; right < nums.size(); right++) {
        // Add current element to sum
        sum += nums[right];

        // Shrink the window from the left if sum exceeds k
        while (sum > k) {
            sum -= nums[left];
            left++;
        }

        // Add the number of valid subarrays ending at right
        count += (right - left + 1);
    }

    return count;
}
int numSubarrayWithSum (vector<int>& nums, int goal) {
    // Return difference between subarrays with sum at most goal and at most (goal - 1)
    return atMost(nums, goal) - atMost(nums, goal - 1);
}
int main()
{
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubarrayWithSum(nums, goal);
    return 0;
}