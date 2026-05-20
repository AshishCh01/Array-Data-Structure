
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int maxConsecutive(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());     // O(nlogn)
    int longest = 1;
    int count = 0;
    int lastSmaller = INT_MIN;
    for (int i=0; i<n; i++) {
        if (nums[i]-1 == lastSmaller) { 
            count = count + 1;
            lastSmaller = nums[i];
        }
        else if (nums[i] != lastSmaller) {
            count = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, count);
    }
    return longest;
}
int main()
{
    vector<int> nums = {100,4,200,1,3,2};
    cout << maxConsecutive(nums);

    return 0;
}