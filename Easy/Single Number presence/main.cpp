
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int XOR = 0;
    for (int i =0; i < nums.size(); i++) {
        XOR = XOR ^ nums[i];
    }
    return XOR;
}

// using hashing
int singleNum(vector<int>& nums) {
    int maxi = nums[0];
    for (int i= 0; i < nums.size(); i++) {
        maxi = max(maxi, nums[i]);
    }
    int hash[maxi] = {0};
    for (int i=0; i<nums.size(); i++) {
        hash[nums[i]]++;
    }
    return {};
}


int main()
{
    vector<int> nums = {1,1,2,3,3};
    cout << singleNumber(nums);

    return 0;
}