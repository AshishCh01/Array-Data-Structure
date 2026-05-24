#include <iostream>
#include <vector>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();
    int hashArr[n+1] ={0};
    for (int i=0; i<n; i++) {   //O(n)
        hashArr[a[i]]++;
    }
    int repeating = -1, missing = -1;
    for (int i=1; i <= n; i++) {    // O(n)
        if (hashArr[i] == 2) repeating = i;
        else if (hashArr[i] == 0) missing = i;
        if(repeating != -1 && missing != -1) {
            break;
        }
    }
    return {repeating, missing};
}
int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};

    vector<int> result = findMissingRepeatingNumbers(nums);
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}
//T.c - O(2n)
// S.c - O(n)