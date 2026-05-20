
#include <iostream>
#include <vector>
using namespace std;
void reArrange(vector<int> & arr) {
    int n = arr.size();
    vector<int> temp;
    // Stores negative elements
    for (int i=0; i<n; i++) {
        if (arr[i] < 0) {
            temp.push_back(arr[i]);
        }
    }
    // Stores positive elements
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp.push_back(arr[i]);
        }
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
}
void printArray(vector<int> &arr) {
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i];
    }
}

int main()
{
    vector<int> arr = {3,-2,-1,5,4,-3};
    reArrange(arr);
    printArray(arr);
    return 0;
}