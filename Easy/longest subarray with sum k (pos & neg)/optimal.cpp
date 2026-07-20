// Handles negative and positive
#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int>& nums, long long k) {
    unordered_map<long, long> preSumMap;
    long long sum = 0; 
    int maxLen = 0;
    for (int i=0; i<nums.size(); i++) {
        
        sum += nums[i];
        // Subarray starts from index 0
        if(sum == k) {
            maxLen = max(maxLen, i+1); // Or maxLen = i+1;
        }
        // Check if (sum - k) exists
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        // Store first occurrence only
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;
    cout << longestSubarrayWithSumK(nums, k);

    return 0;
}