#include <iostream>
#include <vector>
using namespace std;
int longestOnce(vector<int>& nums, int k) {
    int n = nums.size();
    int maxLen = 0;
    for(int i=0; i<n; i++) {
        int zeroCount = 0;
        for (int j=i; j<n; j++) {
            if (nums[j] == 0) {
                zeroCount++;
            }
            if(zeroCount > k) {
                break;
            }
            maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}
int main()
{
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout << longestOnce(nums, k);
    return 0;
}