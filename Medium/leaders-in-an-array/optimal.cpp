#include<bits/stdc++.h>
using namespace std;
vector<int> leadersArray(vector<int>& arr) {
    int n= arr.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i=n-1; i>=0; i--) {
        if (arr[i] > maxi) {
            ans.push_back(arr[i]);
        }
        // keep trak of right max
        maxi = max(maxi, arr[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> result = leadersArray(arr);
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}

T.C - O(n)