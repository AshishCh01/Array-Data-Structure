
#include <iostream>
#include <vector>
using namespace std;
int missingNo(vector<int>& arr) {
    int n= arr.size() + 1;
    for (int i=1; i <= n; i++) {
        bool found = false;
        for (int j =0; j < n-1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) 
            return i;
    }
    return -1;
}

// optimal solution using hashing
void missingNumber(vector<int>& arr) {
    int n = arr.size() + 1;
    int hash[n+1] = {0};
    for (int i =0; i<n; i++) {
        hash[arr[i]] = 1;
    }
    for (int i =1; i<n; i++) {
        if (hash [i] == 0) {
            cout << i;
        }
    }
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    cout << missingNo(arr) << endl; 
    
    missingNumber(arr);

    return 0;
}