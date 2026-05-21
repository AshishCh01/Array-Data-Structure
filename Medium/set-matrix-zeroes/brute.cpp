#include <iostream>
#include <vector>
using namespace std;
void markRow(vector<vector<int>>& matrix, int n, int m, int i) {
    for (int j=0; j<n; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}
void (markCol(vector<vector<int>>& matrix, int n, int m, int j)) {
    for (int i=0; i<n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }
    // Convert -1 into 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
   vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    cout << "Final Matrix:" << endl;

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// T.C - O((n*m)*(n+m)+(n*m)) = n^3