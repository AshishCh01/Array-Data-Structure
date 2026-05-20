// Variety 2 - unequal number of +ve and -ve elements
#include <iostream>
#include <vector>
using namespace std;
vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;
    int n = a.size();
    for (int i=0; i<n; i++) {
        if (a[i] > 0) {
            pos.push_back(a[i]);
        }
        else {
            neg.push_back(a[i]);
        }
    }
    if (pos.size() > neg.size()) {
        for (int i=0; i<neg.size(); i++) {
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i=neg.size(); i<pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    }
    else {
        for (int i=0; i<pos.size(); i++) {
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i=pos.size(); i<neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}
int main()
{
   vector<int> a = {3,1,-1,-5,2,-4,6,7};
   vector<int> result = alternateNumbers(a);
   for(int x : result) {
        cout << x << " ";
    }
    return 0;

}