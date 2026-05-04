
#include <iostream>
using namespace std;
void rotateArray (int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
void printArray(int arr[], int n) {
    for (int i =0; i<n; i++) {
        cout<<arr[i];
    }
}

// or
// void rotateArr(vector<int>& arr, int k) {
//     int n = arr.size();
//     int temp = arr[0];
//     for (int i=1; i<n; i++) {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }
// int main() {
//     vector<int> arr = {1,3,4,5,7};
//     int k=1;
//     rotateArr(arr, k);
//     for (int i=0; i<arr.size(); i++) {
//         cout << arr[i];
//     }
//     return 0;
// }


int main()
{
   int arr[]= {1,2,3,4,5};
   int n = 5;
   rotateArray(arr, n);
   printArray(arr, n);
   return 0;
}