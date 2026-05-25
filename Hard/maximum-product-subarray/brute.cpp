#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int product = 1;
            for (int k=j; k<n; k++) {
                product = product * nums[k];
                maxi = max(maxi, product);
            }
        }
    }
    return maxi;
}
// OR 
int maxProducts(vector<int>& nums) {
    // Initialize the answer with the first element
    int maxProd = nums[0];

    // Outer loop picks the starting index
    for (int i = 0; i < nums.size(); i++) {
        // Initialize current product to 1
        int prod = 1;

        // Inner loop picks the ending index
        for (int j = i; j < nums.size(); j++) {
            // Multiply current number to product
            prod *= nums[j];

            // Update maximum product if needed
            maxProd = max(maxProd, prod);
        }
    }
    // Return the result
    return maxProd;
}

int main () {
    vector<int> nums = {2, 3, -2, 4};
    cout << maxProduct(nums);
    return 0;
}