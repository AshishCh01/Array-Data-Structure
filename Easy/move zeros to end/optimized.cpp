#include <iostream>
#include <vector>
using namespace std;

// Two pointer approach
vector<int> moveZeros(vector<int> vec) {   
    int j = -1;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) return vec;               
    for (int i = j + 1; i < vec.size(); i++) {
        if (vec[i] != 0) {
            swap(vec[i], vec[j]);
            j++;
        }
    }
    return vec;                            // return modified vec
}

int main() {
    vector<int> vec = {1, 2, 0, 1, 0, 3};
    vector<int> result = moveZeros(vec);   // capture returned vector
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}