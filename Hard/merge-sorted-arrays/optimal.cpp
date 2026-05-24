#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}
void merge(long long arr1[], long long arr2[], int n, int m) {
    int len = (n+m);
    int gap = (len / 2) + (len % 2);
    while (gap > 0) {
        int left = 0;
        int right = left + gap;
        while (right < len) {
            // comparing arr1 and arr2
            if (left < n && right >= n) {
                swapIfGreater(arr1, arr2, left, right - n);
            } 
            // comparing arr2 and arr2
            else if (left >= n){
                swapIfGreater(arr2, arr2, left - n, right - n);
            }
            // comparing arr1 and arr1
            else {
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;
        }
        if (gap == 1) break;
        gap = (gap/2) + (gap%2);
    }
}
int main() {
    long long arr1[] = {1,3,5,7};
    long long arr2[] = {0,2,6,8,9};
    int n = 4;
    int m = 5;
    merge(arr1, arr2, n, m);
    // print arr1
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    // print arr2
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}