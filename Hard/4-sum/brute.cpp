#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i=0; i<n; i++) {
        for (int j= i+1; j<n; j++) {
            for (int k = j+1; k<n; k++) {
                for (int l= k+1; l<n; l++) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort (temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> nums = {2,2,2,2,2};
    int target = 8;
     vector<vector<int>> ans = fourSum(nums, target);
     for(auto it : ans) {
        for(auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}