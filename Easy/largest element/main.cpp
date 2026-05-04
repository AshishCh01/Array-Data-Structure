#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int>& arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// or

void largestEle(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    cout << arr.back();
}

int main () {
    vector<int> arr = {1,5,2,3,9};
    cout << largestElement(arr)  << endl;
    largestEle(arr);
    cout << secondLargest(arr);
}