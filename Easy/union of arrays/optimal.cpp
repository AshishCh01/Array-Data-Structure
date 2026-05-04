#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector < int > sortedArray(vector<int> a, vector<int> b) {
    // Two pointer Approach
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    int i =0;
    int j =0;
    vector<int> unionArr;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < n2) {    
        if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
        }
        j++;
    }
    while (i < n1) {
        if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
        }
        i++;
    }
    for (int i = 0; i < unionArr.size(); i++) {
        cout<< unionArr[i];
    }
    return unionArr;
}

int main() {
    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {2,3,4,5,6};
    sortedArray(a, b);
    return 0;
}