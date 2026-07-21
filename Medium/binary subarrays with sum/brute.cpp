#include <bits/stdc++.h>
using namespace std;

// Function to count number of subarrays with sum equal to goal
int numSubarraysWithSum(vector<int>& nums, int goal) {
    // Variable to store the final count of valid subarrays
    int count = 0;

    // Outer loop to fix the starting index of subarray
    for (int start = 0; start < nums.size(); ++start) {
        // Variable to store sum of current subarray
        int sum = 0;

        // Inner loop to fix the ending index of subarray
        for (int end = start; end < nums.size(); ++end) {
            // Add the current element to sum
            sum += nums[end];

            // If subarray sum equals goal, increment count
            if (sum == goal) {
                count++;
            }
        }
    }

    // Return the total count of valid subarrays
    return count;
}

int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubarraysWithSum(nums, goal) << endl; 
    return 0;
}