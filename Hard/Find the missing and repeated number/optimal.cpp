#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long  n = a.size();
    long long S = 0, S2 = 0;
    // // Sum of first n natural numbers
    long long SN = (n * (n+1)) / 2;
    // Sum of squares of first n natural numbers
    long long S2N = (n * (n+1) * (2*n+1)) / 6;
    
    /*Calculate actual sum (S) and sum 
        of squares (S2) of array elements*/
    for (int i=0; i<n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1 = S - SN;        // x-y
    long long val2 = S2 - S2N;
    val2 = val2 / val1;         // x+y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}
int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> result = findMissingRepeatingNumbers(nums);
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}