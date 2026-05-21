#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector <int> intersectionArray(vector<int> &A,int n, vector<int> &B, int m) {
    vector<int> ans;
    int vis[m] = {0};
    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(A[i] == B[j] && vis[j] == 0) {
                ans.push_back(A[i]);
                break;
            }
            if(B[j] > A[i]) break;
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


