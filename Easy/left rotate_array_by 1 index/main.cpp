
#include <iostream>
#include <vector>
using namespace std;

void rotateArr(vector<int>& arr) {
    int n = arr.size();
    int temp = arr[0];
    for (int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    vector<int> arr = {1,3,4,5,7};
    rotateArr(arr);
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i];
    }
    return 0;
}

// void rotateArray (int arr[], int n) {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++) {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }
// void printArray(int arr[], int n) {
//     for (int i =0; i<n; i++) {
//         cout<<arr[i];
//     }
// }

// int main()
// {
//    int arr[]= {1,2,3,4,5};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    rotateArray(arr, n);
//    printArray(arr, n);
//    return 0;
// }


