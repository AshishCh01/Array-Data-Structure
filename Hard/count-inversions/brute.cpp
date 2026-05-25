#include <iostream>
#include <vector>
using namespace std;
int numberOfInversions(vector<int>& a, int n) {
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] > a[j]) {
                count++;
            }
        }
    }
    return count;
}
int main () {
    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions is: " << cnt << endl;
    return 0;
}