
#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int left = 0; // points to the position for next non-zero element

    // Fast pointer scans every element
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}
int main() {
    vector<int> nums = {1,2,0,3,0,0,5};
    moveZeroes(nums);
    for (int i =0; i < nums.size(); i++) {
        cout << nums[i];
    }
}