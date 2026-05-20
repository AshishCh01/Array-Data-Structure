// Kadanes Algorithm
#include <iostream>
#include <vector>
#include<climits>
using namespace std;
long long maxSubArrSum(vector<int>& arr) {
    int n = arr.size();
    long long maxSum = INT_MIN;
    long long currSum = 0;
    for (int i=0; i<n; i++) {
        currSum += arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {-1, -2, 4, -1, -2, 1, 3};
    cout << maxSubArrSum(arr);

    return 0;
}