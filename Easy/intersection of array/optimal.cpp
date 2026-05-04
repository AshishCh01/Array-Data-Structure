#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector < int > intersectionArray(vector<int> &A,int n, vector<int> &B, int m) {
    int i =0;
    int j =0;
    vector<int> ans;
    while (i<n && j<m) {
        if(A[i] < B[j]) {
            i++;
        }
        else if (B[j] < A[i]) {
            j++;
        }
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout<< ans[i];
    }
    return ans;
}

int main() {
    vector<int> A = {1,2,3,4,5,6};
    int n = 6;
    vector<int> B = {2,3,4,5,6};
    int m = 5;
    intersectionArray(A, n, B, m);
    return 0;
}