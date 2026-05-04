
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,0,1,0,3};
    vector<int> temp;
    // step 1 - Putting non zero element into temp vector
    for (int i=0; i<vec.size(); i++) {  
        if (vec[i] != 0) {
            temp.push_back(vec[i]);
        }
    }
    // step 2 - Putting all non zero or temp vector into the front of vec vector
    for (int i =0; i<temp.size(); i++) { 
        vec[i] = temp[i];
    }
    // step 3 - putiing all 0s into the end of the vec vector.
    for (int i=temp.size(); i <vec.size(); i++) { // 
        vec[i] = 0;
    }
    
    // Printing  after moving zeros to end
    for (int j=0; j<vec.size(); j++) {
        cout << vec[j];
    }
    return 0;
}

// T.c = O(2n), S.c - O(n)