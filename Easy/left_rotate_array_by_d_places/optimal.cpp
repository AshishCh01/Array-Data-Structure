/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Right Rotate by d places 
void rightRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(), arr.end());         // Step 1: Reverse entire vector
    reverse(arr.begin(), arr.begin() + d);   // Step 2: Reverse first k elements
    reverse(arr.begin() + d, arr.end());     // Step 3: Reverse remaining elements
}

// OR using arr
// void rightRotate(int arr[], int n, int k) {
//     k %= n;
//     reverse(arr, arr + n);       // Step 1: Reverse all
//     reverse(arr, arr + k);       // Step 2: Reverse first k
//     reverse(arr + k, arr + n);   // Step 3: Reverse last
//}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//   int arr[] = {1,2,3,4,5,6,7};
//    int n= 7;
    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    rightRotate(arr, d);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
//output 5 6 7 1 2 3 4

