// Printing any Nth row
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

void printRow(int n) {

    for (int col = 0; col < n; col++) {
        cout << nCr(n-1, col) << " ";
    }
}

int main() {
    int n = 6;

    printRow(n);

    return 0;
}