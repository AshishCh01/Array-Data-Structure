#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr){
    int largest = arr[0];
    int n= arr.size();
    for (int i =0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    } 
    int sLargest = INT_MIN; // handles all negative values
    for (int i = -1; i < n; i++) {
        if (arr[i] > sLargest && arr[i] != largest) {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> arr){
    int smallest = arr[0];
    int n= arr.size();
    for (int i =0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    } 
    int sSmallest = INT_MAX; // handles all negative values
    for (int i = 0; i < n; i++) {
        if (arr[i] < sSmallest && arr[i] != smallest) {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main () {
    vector<int> arr = {1,2,3,6,7,1};
    cout << secondLargest(arr) << endl;
    cout << secondSmallest(arr);
}