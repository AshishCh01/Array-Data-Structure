#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& arr) {
    int n = arr.size();

    int cnt1 = 0, cnt2 = 0;
    int el1 = 0, el2 = 0;

    // Find potential candidates
    for (int i = 0; i < n; i++) {

        if (cnt1 == 0 && arr[i] != el2) {
            cnt1 = 1;
            el1 = arr[i];
        }

        else if (cnt2 == 0 && arr[i] != el1) {
            cnt2 = 1;
            el2 = arr[i];
        }

        else if (arr[i] == el1) {
            cnt1++;
        }

        else if (arr[i] == el2) {
            cnt2++;
        }

        else {
            cnt1--;
            cnt2--;
        }
    }

    // Verify candidates
    cnt1 = 0;
    cnt2 = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == el1) {
            cnt1++;
        }

        else if (arr[i] == el2) {
            cnt2++;
        }
    }

    vector<int> ans;

    if (cnt1 > n / 3) {
        ans.push_back(el1);
    }

    if (cnt2 > n / 3) {
        ans.push_back(el2);
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
