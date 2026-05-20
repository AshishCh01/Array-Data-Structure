// Number of ways for possible arranging = n!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutationBrute(vector<int>& nums) {
    
    vector<int> original = nums;
    vector<vector<int>> permutations;

    // Sort to generate all permutations
    sort(nums.begin(), nums.end());

    // Generate all permutations
    do {
        permutations.push_back(nums);
    } while(next_permutation(nums.begin(), nums.end()));

    int n = permutations.size();

    // Find original permutation
    for(int i = 0; i < n; i++) {
        if(permutations[i] == original) {

            // Get next permutation
            nums = permutations[(i + 1) % n];
            return;
        }
    }
}

int main() {

    vector<int> nums = {1, 2, 3};

    cout << "Original Array: ";
    for(int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    nextPermutationBrute(nums);

    cout << "Next Permutation: ";
    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}