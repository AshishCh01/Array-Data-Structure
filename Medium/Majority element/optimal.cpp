// Moores Algorithm
#include <iostream>
#include <vector>
using namespace std;
int majorityEle(vector<int>& v) {
    int count = 0;
    int el;
    for (int i=0; i < v.size(); i++) {
        if (count == 0) {
            count=1;
            el = v[i];
        }
        else if (v[i] == el) {
            count++;
        }
        else {
            count--;
        }
    }
    // Verification step optional
    int count1 = 0;
    for (int i=0; i<v.size(); i++) {
        if (v[i] == el) {
            count1++;
        }
    }
    if (count1 > (v.size() / 2)) {
        return el;
    }
    return -1;
}

// OR
int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main()
{
    vector<int> v = {2,1,2,2,3,2,2};
    cout << majorityEle(v);
    return 0;
}