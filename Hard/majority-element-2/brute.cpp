#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;

    for (int i = 0; i < n; i++) {

        // // Check if element already exists in answer
        // bool found = false;
        // for (int x : ans) {
        //     if (x == arr[i]) {
        //         found = true;
        //         break;
        //     }
        // }
        // // Skip duplicate elements
        // if (found) {
        //     continue;
        // }
        
        // OR
        if ((ans.size() > 0 && ans[0] == arr[i]) ||
            (ans.size() > 1 && ans[1] == arr[i])) {
            continue;
        }
        //
        
        int count = 0;

        // Count frequency
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // Add element if frequency > n/3
        if (count > n / 3) {
            ans.push_back(arr[i]);
        }

        // Maximum possible majority elements = 2
        if (ans.size() == 2) {
            break;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,1,1,3,3,2,2,2};

    vector<int> result = majorityElement(arr);

    cout << "Majority Elements: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}