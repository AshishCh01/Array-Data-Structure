#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Brute force using set
void removeDuplicate(vector<int> v) {
    set<int> s;
    for (int x : v) {
        s.insert(x);
    }

    // Copy back to vector manually (without assign)
    v.clear();
    for (int x : s) {
        v.push_back(x);
    }

    // Print result
    for (int x : v) {
        cout << x << " ";
    }
}

// Two pointer approach to remove duplicates from a sorted array
//method 1
void duplicate(vector<int>& nums) {
    int index =0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[index] != nums[j]) {
            nums[index] = nums[j];
            index++;
        }
    }
        // Resize the array to remove the duplicate elements
    for (int i = 0; i <= index; i++) {
        cout << nums[i] << " " << endl;
    }

}

// method 3
int removeDuplicates(vector<int>& nums) {
    int k = 1; // First element is always unique
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k - 1]) { // Found a new unique element
            nums[k] = nums[i];         // Place it at the next uniqueslot
            k++;
        }
    }
    return k;
}

int main() {
    
    vector<int> v = {1, 2, 2, 3, 4, 4};
    removeDuplicate(v);
    // vector<int> nums;
    // int uniqueCount = removeDuplicates(nums);
    // Print the unique elements
    // for (int i = 0; i < uniqueCount; i++) {
    //     cout << nums[i] << " " << endl;
    // }
    
    return 0;
}



