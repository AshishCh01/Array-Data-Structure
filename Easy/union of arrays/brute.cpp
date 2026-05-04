#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector < int > sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i =0; i <n1; i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i <n2; i++) {
        st.insert(b[i]);
    }
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }
    for (int i =0; i <temp.size(); i++) {
        cout<< temp[i];
    }
    
    return temp;
}


int main() {
    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {2,3,4,5,6};
    sortedArray(a, b);
    return 0;
}


// Method 2
vector<int> unionArray(vector<int>& arr1, vector<int>& arr2) {
    
    set<int> s;

    // Insert elements from both arrays
    for (int x : arr1) {
        s.insert(x);
    }

    for (int x : arr2) {
        s.insert(x);
    }

    // Convert set to vector
    vector<int> result(s.begin(), s.end());

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};

    vector<int> result = unionArray(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}


