/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,0,1,0,3};
    vector<int> temp;
    for (int i=0; i<vec.size(); i++) {
        if (vec[i] != 0) {
            temp.push_back(vec[i]);
        }
    }
    for (int j=0; j<temp.size(); j++) {
        cout << temp[j];
    }
    return 0;
}