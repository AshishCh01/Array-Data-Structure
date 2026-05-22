
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> majorityElement(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans;
    unordered_map<int, int> mpp;
    
    // OR
    // int mini = (int)(n/3) + 1;
    // for (int i = 0; i < n; i++) {
    //     mpp[arr[i]]++;
    //     if (mpp[arr[i]] == mini) {
    //         ans.push_back(arr[i]);
    //     }
    //     if (ans.size() == 2) {
    //         break;
    //     }
    // }
    

    // Store frequency
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Check frequency
    for (auto it : mpp) {
        if (it.second > n / 3) {
            ans.push_back(it.first);
        }

        // Maximum possible answers = 2
        if (ans.size() == 2) {
            break;
        }
    }
    sort(ans.begin(), ans.end());   // Optional
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