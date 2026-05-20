
#include <iostream>
#include <vector>
using namespace std;
double myPow(double x, int n) {
    long binForm = n;
    double ans = 1;
    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double x = 2.10000;
    int n = 3;
    cout << myPow(x, n);
    return 0;
}