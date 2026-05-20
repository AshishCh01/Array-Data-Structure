
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int idx = -1;
    for (int i=n-2; i>=0; i++) {
        if (arr[i] < arr[i+1]) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for(int i=n-1; i>idx; i--) {
        if (arr[i] > arr[idx]) {
            swap(arr[i], arr[idx]);
            break;
        }
    }
    reverse(arr.begin() + idx + 1, arr.end());
    return arr;
 }
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> result = nextPermutation(arr);
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}