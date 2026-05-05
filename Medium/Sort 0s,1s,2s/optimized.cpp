#include<iostream>
#include<vector>
using namespace std;
void sortZeros(vector<int>& arr) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i=0; i<arr.size(); i++) {
        if (arr[i] == 0) {
            count0++;
        }
        else if (arr[i] == 1) {
            count1++;
        }
        else {
            count2++;
        }
    }
    for (int i=0; i<count0; i++) {
        arr[i] = 0;
    }
    for (int i=count0; i < count0+count1; i++) {
        arr[i] = 1;
    }
    for (int i = count0+count1; i < arr.size(); i++) {
        arr[i] = 2;
    }
}

int main()
{
    vector<int> arr = {0,1,1,0,2,1,0,2};
    sortZeros(arr);
    for (int i=0; i < arr.size(); i++) {
        cout << arr[i];
    }

    return 0;
}