#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m) {
    int left = n-1;
    int right = 0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
}

void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //long long nums3[n + m];
        int left = n-1;
        int right = 0;
        while (left >= 0 && right < m) {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--, right++;
            }
            else {
                break;
            }
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
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