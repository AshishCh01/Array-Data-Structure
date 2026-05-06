#include<iostream>
using namespace std;
int uniqeElement(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}
int main () {
    int arr[] = {2,7,3,3,7,2,4};
    int n = 7;
    cout << uniqeElement(arr, n);
}