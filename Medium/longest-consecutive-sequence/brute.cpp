
#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            return true;
        }
    }

    return false;
}

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();

    if (n == 0) return 0;

    int longest = 1;

    for (int i = 0; i < n; i++) {
        int x = nums[i];
        int count = 1;

        // Find next consecutive elements
        while (linearSearch(nums, x + 1) == true) {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << longestConsecutive(nums);

    return 0;
}