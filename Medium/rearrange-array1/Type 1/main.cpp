// Variety 1 - Equal number of positives and negatives
#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIdx = 0, negIdx = 1;
    for (int i=0; i<n; i++) {
        if (nums[i] < 0) {
            ans[negIdx] = nums[i];
            negIdx += 2;
        }
        else {
            ans[posIdx] = nums[i];
            posIdx += 2;
        }
    }
    return ans;
}
int main()
{
   vector<int> nums = {3,1,-1,-5,2,-4};
   vector<int> result = rearrangeArray(nums);
   for(int x : result) {
        cout << x << " ";
    }
    return 0;
}