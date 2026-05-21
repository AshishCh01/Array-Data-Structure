// 1. Given row and column as parameter n and r find the element at specific at that place
#include <iostream>
using namespace std;

long long nCr(int n, int r) {
    long long res = 1;

    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

int main() {
    int n = 5;
    int r = 3;

    cout << nCr(n-1, r-1);

    return 0;
}