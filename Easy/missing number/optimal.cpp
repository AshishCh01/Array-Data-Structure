/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// optimal solution using summing the entire array
int missingNum(vector<int>& arr) {
        // code here
    int sum = 0;
    int n= arr.size() + 1;
    for (int i =0; i< n-1; i++) {
        sum += arr[i];
    }
    int missing = n*(n+1)/2 - sum;
    return missing;
}

// optimal solution using xor
int missingnumber(vector<int>& arr) {
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;
    for (int i =0; i<n-1; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main()
{
    vector<int> arr = {1,2,3,5,6};
    cout << missingNum(arr) << endl;
    cout << missingnumber(arr);
    return 0;
}



