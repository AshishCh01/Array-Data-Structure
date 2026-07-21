#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numSubarrayWithSum (vector<int>& nums, int goal) {
    unordered_map<int, int> prefixSumCount;

    // Initialize count of valid subarrays and current sum
    int count = 0, sum = 0;

    // Add base case: prefix sum 0 has frequency 1
    prefixSumCount[0] = 1;

    // Iterate through the array
    for (int num : nums) {
        // Add current element to prefix sum
        sum += num;

        // If (sum - goal) exists in map, add its frequency to count
        if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) {
            count += prefixSumCount[sum - goal];
        }

        // Increment frequency of current prefix sum
        prefixSumCount[sum]++;
    }

    // Return total count of valid subarrays
    return count;
    
}
int main()
{
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubarrayWithSum(nums, goal);
    return 0;
}