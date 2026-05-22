#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        // Skip duplicate elements
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {
                    nums[i],
                    nums[j],
                    nums[k]
                };
                ans.push_back(temp);
                j++;
                k--;
                // Remove duplicates from left side
                while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                }
                // Remove duplicates from right side
                while (j < k && nums[k] == nums[k + 1]) {
                    k--;
                }
            }
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}