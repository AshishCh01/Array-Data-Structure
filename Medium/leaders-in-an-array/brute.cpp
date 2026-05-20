
// T.C - O(n^2), S.c - O(n)
#include <iostream>
#include <vector>
using namespace std;
void leadersArray (vector<int>& arr) {
    int n = arr.size();
    vector<int> ans;
    for (int i=0; i<n; i++) {
        bool leader = true;
        for (int j=i+1; j<n; j++) {
            if (arr[j] > arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader == true) {
            ans.push_back(arr[i]);
        }
    }
    for(int x : ans) {
        cout << x << " ";
    }
}
int main()
{
    vector<int> arr = {10, 22,12,3,0,6};
    leadersArray(arr);
    

    return 0;
}