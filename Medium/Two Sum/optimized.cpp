
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        // Step 1: store value + index in pairs
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i}); // nums[i] = first value of pair, i = second value of pairs
        }

        // Step 2: sort
        sort(arr.begin(), arr.end());

        // Step 3: two pointer
        int left = 0, right = n - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
    
int main () {
    vector<int> nums = {1,2,3,4,5};
    int target  = 9;
    vector<int> result = twoSum(nums, target);
    for (int i : result) {
        cout << i << " ";
    }
}


// T.C = O(nlogn)