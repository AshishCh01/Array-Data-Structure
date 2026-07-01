#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();

    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }

        ans.push_back(subset);
    }

    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    cout << "All Subsets:\n";

    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
