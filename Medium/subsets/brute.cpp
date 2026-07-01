#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;

    // Start with the empty subset
    ans.push_back({});

    for (int num : nums) {
        int size = ans.size();

        // Add the current number to all existing subsets
        for (int i = 0; i < size; i++) {
            vector<int> temp = ans[i];
            temp.push_back(num);
            ans.push_back(temp);
        }
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