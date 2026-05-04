#include <iostream>
#include <vector>
using namespace std;

// Pass by VALUE — caller unaffected
int countDupes_value(vector<int> nums) {
    nums[0] = 999;  // modifies only the local copy
    return 1;
}

// Pass by REFERENCE — caller's vector is changed
int countDupes_ref(vector<int>& nums) {
    nums[0] = 999;  // modifies the original!
    return 1;
}

int main() {
    vector<int> v = {1, 2, 3, 4};

    countDupes_value(v);
    cout << v[0] << endl;  // still 1 — unchanged ✓

    countDupes_ref(v);
    cout << v[0];  // now 999 — modified!
}