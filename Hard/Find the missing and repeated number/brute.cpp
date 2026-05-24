// 
#include <iostream>
#include <vector>
using namespace std;
vector<int> findMissingRepeatingNO(vector<int>& nums) {
    int n= nums.size();
    int repeating = -1;
    int missing = -1;
    for (int i=1; i<n; i++) {
        int count = 0;
        for (int j=0; j<n; j++) {
            if (nums[j] == i) {
                count++;
            }
        }
        if (count == 2) {
            repeating = i;
        }
        else if (count == 0) {
            missing = i;
        }
        if (repeating != -1 && missing != -1) {
            break;
        }
    }
    return {repeating, missing};
}
int main () {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> result = findMissingRepeatingNO(nums);
    
    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}