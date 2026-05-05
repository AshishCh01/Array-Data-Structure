#include <vector>
#include <iostream>
using namespace std;
int majorityEle(vector<int>& arr) {
    int n = arr.size();
    // int count = 0;
    for (int i=0; i<n; i++) { 
        int count = 0;
        for (int j=0; j<n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n/2) {
            return arr[i];
        }
    }
    return -1; // fallback (though problem guarantees majority exists)
}
int main()
{
    vector<int> arr = {1,2,2,3,2};
    cout << majorityEle(arr);

    return 0;
}