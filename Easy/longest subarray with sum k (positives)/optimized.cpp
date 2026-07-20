// for positives only
#include <iostream>
#include<vector>
using namespace std;
void longestSubarrayWithSumX(vector<int>& nums, int x) {
    int n = nums.size();
    int length = 0;
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=i; j<n; j++) {
            sum += nums[j];
            if (sum == x) {
                length = max(length, j-i+1);
            }
        }
    }
    cout << length;
}
int main()
{
    vector<int> nums = {1,2,3,1,1,1};
    int x = 3;
    longestSubarrayWithSumX(nums, x);
    return 0;
}