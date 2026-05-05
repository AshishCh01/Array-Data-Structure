
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i]; 

        // Check if needed value exists
        if (mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }

        // Store current element
        mp[nums[i]] = i;
    }

    return {};
}

// OR
vector<int> twoSumm(vector<int>& arr, int tar) {
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i=0; i<arr.size(); i++) {
        int first = arr[i];
        int sec = tar - first;
        if (m.find(sec) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> resultt = twoSum(nums, target);
    cout << "Indices: " << resultt[0] << " " << resultt[1] << endl; 
    // OR
    
    vector<int> arr = {2, 7, 11, 15};
    int tar = 9;
    vector<int> result = twoSumm(arr, tar);
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}