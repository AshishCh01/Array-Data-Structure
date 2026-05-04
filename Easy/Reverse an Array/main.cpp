
#include <iostream>
#include <vector>
using namespace std;
void reverseArr (vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i =0; i < arr.size(); i++) {
        cout << arr[i];
    }
}
int main() {
    // Write C++ code here
    vector<int> arr = {1,2,3,6,5};
    reverseArr(arr);
    return 0;
}