// Optimal solution using hashmap
#include <map>
#include<vector>
#include <iostream>
using namespace std;
int majorityEle(vector<int> v) {
    map<int, int>mpp;
    for (int i=0; i<v.size(); i++) {
        mpp[v[i]]++;
    }
    for (auto it : mpp) {
        if (it.second > (v.size() / 2)) {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {1,0,1,2,0,1,1};
    cout << majorityEle(v);

    return 0;
}