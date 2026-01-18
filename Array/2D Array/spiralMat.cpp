#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();

        int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;
p
        while (srow <= erow && scol <= ecol) {

            // Top
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            srow++;

            // Right
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // Bottom
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
                erow--;
            }

            // Left
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result = obj.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
